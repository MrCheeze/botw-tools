import evfl # https://github.com/leoetlino/evfl
from evfl.event import *
import os
import os.path

def print_flowchart(flowchart):
    printed_flowchart = "-------- EventFlow: " + flowchart.name + " --------\n"
    
    for actor in flowchart.actors:
        printed_flowchart += '\n'
        printed_flowchart += print_actor(actor)
        
    alreadySeen=[]
    lines=[]
    neededLabels=[]
    for entrypoint in flowchart.entry_points:
        lines.append('\n')
        print_entrypoint(entrypoint,alreadySeen,lines,neededLabels)
            
    assert len(alreadySeen) == len(flowchart.events) and len(alreadySeen) == len(set(alreadySeen))

    for line in lines:
        if type(line) == str:
            printed_flowchart+=line
        elif line['label'] in neededLabels:
            printed_flowchart+=line['line']
    
    return printed_flowchart

def print_actor(actor):
    printed_actor = ''
    printed_actor += "Actor: " + str(actor.identifier) + '\n'
    printed_actor += "entrypoint: " +str(actor.argument_entry_point.v.name if actor.argument_entry_point.v else None)+"("+actor.argument_name+")" + '\n'
    printed_actor += "actions: " + str([str(x) for x in actor.actions]) + '\n'
    printed_actor += "queries: " + str([str(x) for x in actor.queries]) + '\n'
    printed_actor += "params: " + str(actor.params.data if actor.params else None) + '\n'
    return printed_actor

def print_entrypoint(entrypoint,alreadySeen,lines,neededLabels):
    lines.append("void " + entrypoint.name + '() {\n')
    
    event = entrypoint.main_event.v
    print_event(event,1,alreadySeen,lines,neededLabels)
    lines.append('}\n')

def getNxt(event):
    assert not isinstance(event.data, SwitchEvent)
    if event is None:
        return None
    if isinstance(event.data, ForkEvent):
        if event.data.join.v is None or event.data.join.v.data.nxt.v is None:
            return None
        return event.data.join.v.data.nxt.v.name
    else:
        if event.data.nxt.v is None:
            return None
        return event.data.nxt.v.name

def getDistinctCases(event):
    distinctCases = {}
    for key in event.data.cases:
        if event.data.cases[key].v.name not in distinctCases:
            distinctCases[event.data.cases[key].v.name] = []
        distinctCases[event.data.cases[key].v.name].append(key)
    return distinctCases

def isEventTrueFalse(event):
    isTrueFalse = len(event.data.cases) in [1,2]
    for key in event.data.cases:
        if key != 0 and key != 1:
            isTrueFalse = False
    if isTrueFalse:
        if 0 in event.data.cases and 1 in event.data.cases and event.data.cases[0].v.name == event.data.cases[1].v.name:
            isTrueFalse = False
    return isTrueFalse
    
def print_event(event,indent,alreadySeen,lines,neededLabels,noPrintNxt=False,isAnd=False):
    if event == None:
        return
    spaces = "    " * indent
    if event.name in alreadySeen:
        lines.append(spaces+'goto '+event.name+'\n')
        neededLabels.append(event.name)
        return
    alreadySeen.append(event.name)
    lines.append({'label':event.name,'line':spaces+event.name+':\n'})
    if isinstance(event.data, ActionEvent):
        lines.append(spaces+str(event.data.actor.v.identifier)+"."+str(event.data.actor_action.v)+"("+str(event.data.params.data)+")\n")
        if not noPrintNxt:
            print_event(event.data.nxt.v,indent,alreadySeen,lines,neededLabels)
    elif isinstance(event.data, SwitchEvent):
        if len(event.data.cases) == 0:
            lines.append(spaces+';\n')
        else:
            isTrueFalse = isEventTrueFalse(event)
            if isTrueFalse:
                keys = list(event.data.cases.keys())
                if len(event.data.cases) > 1 and not isinstance(event.data.cases[keys[0]].v.data, SwitchEvent) and getNxt(event.data.cases[keys[0]].v) == event.data.cases[keys[1]].v.name:
                    lines.append(spaces+("&& " if isAnd else "if ") + ('' if keys[0] else '!') + str(event.data.actor.v.identifier)+"."+str(event.data.actor_query.v)+"("+str(event.data.params.data if event.data.params else '')+") {\n")
                    print_event(event.data.cases[keys[0]].v,indent+1,alreadySeen,lines,neededLabels,noPrintNxt=True)
                    lines.append(spaces+"}\n")
                    print_event(event.data.cases[keys[1]].v,indent,alreadySeen,lines,neededLabels)
                elif len(event.data.cases) > 1 and not isinstance(event.data.cases[keys[1]].v.data, SwitchEvent) and getNxt(event.data.cases[keys[1]].v) == event.data.cases[keys[0]].v.name:
                    lines.append(spaces+("&& " if isAnd else "if ") + ('' if keys[1] else '!') + str(event.data.actor.v.identifier)+"."+str(event.data.actor_query.v)+"("+str(event.data.params.data if event.data.params else '')+") {\n")
                    print_event(event.data.cases[keys[1]].v,indent+1,alreadySeen,lines,neededLabels,noPrintNxt=True)
                    lines.append(spaces+"}\n")
                    print_event(event.data.cases[keys[0]].v,indent,alreadySeen,lines,neededLabels)
                elif len(event.data.cases) > 1 and not isinstance(event.data.cases[keys[0]].v.data, SwitchEvent) and not isinstance(event.data.cases[keys[1]].v.data, SwitchEvent) and getNxt(event.data.cases[keys[0]].v) == getNxt(event.data.cases[keys[1]].v):
                    lines.append(spaces+("&& " if isAnd else "if ") + ('' if keys[0] else '!') + str(event.data.actor.v.identifier)+"."+str(event.data.actor_query.v)+"("+str(event.data.params.data if event.data.params else '')+") {\n")
                    print_event(event.data.cases[keys[0]].v,indent+1,alreadySeen,lines,neededLabels,noPrintNxt=True)
                    lines.append(spaces+"} else {\n")
                    print_event(event.data.cases[keys[1]].v,indent+1,alreadySeen,lines,neededLabels,noPrintNxt=True)
                    lines.append(spaces+'}\n')
                    if isinstance(event.data.cases[keys[1]].v.data, ForkEvent):
                        print_event(event.data.cases[keys[1]].v.data.join.v.data.nxt.v,indent,alreadySeen,lines,neededLabels)
                    else:
                        print_event(event.data.cases[keys[1]].v.data.nxt.v,indent,alreadySeen,lines,neededLabels)
                else:
                    displayNextWithAnd = isinstance(event.data.cases[keys[0]].v.data, SwitchEvent) and ((len(event.data.cases)==1 and len(getDistinctCases(event.data.cases[keys[0]].v))==1) or (len(event.data.cases)==2 and len(event.data.cases[keys[0]].v.data.cases)==2 and isEventTrueFalse(event.data.cases[keys[0]].v) and event.data.cases[keys[1]].v.name==list(event.data.cases[keys[0]].v.data.cases.values())[1].v.name)) and event.data.cases[keys[0]].v.name not in alreadySeen
                    lines.append(spaces+("&& " if isAnd else "if ") + ('' if keys[0] else '!') + str(event.data.actor.v.identifier)+"."+str(event.data.actor_query.v)+"("+str(event.data.params.data if event.data.params else '')+(")\n" if displayNextWithAnd else ") {\n"))
                    if displayNextWithAnd:
                        print_event(event.data.cases[keys[0]].v,indent,alreadySeen,lines,neededLabels,isAnd=True)
                    else:
                        print_event(event.data.cases[keys[0]].v,indent+1,alreadySeen,lines,neededLabels)
                        if len(event.data.cases) > 1:
                            assert event.data.cases[0].v.name != event.data.cases[1].v.name
                            if (isinstance(event.data.cases[keys[1]].v.data, SwitchEvent)):
                                lines.append(spaces+"} else\n")
                                print_event(event.data.cases[keys[1]].v,indent,alreadySeen,lines,neededLabels)
                            else:
                                lines.append(spaces+"} else {\n")
                                print_event(event.data.cases[keys[1]].v,indent+1,alreadySeen,lines,neededLabels)
                                lines.append(spaces+"}\n")
                        else:
                            lines.append(spaces+"}\n")
            else:
                distinctCases = getDistinctCases(event)
                distinctKeys = list(distinctCases.values())
                    
                if len(distinctKeys) == 1:
                    keyList = distinctKeys[0]
                    displayNextWithAnd = isinstance(event.data.cases[keyList[0]].v.data, SwitchEvent) and len(getDistinctCases(event.data.cases[keyList[0]].v))==1 and event.data.cases[keyList[0]].v.name not in alreadySeen
                    if len(keyList) == 1:
                        lines.append(spaces+("&& " if isAnd else "if ") + str(event.data.actor.v.identifier)+"."+str(event.data.actor_query.v)+"("+str(event.data.params.data if event.data.params else '')+") == "+str(keyList[0])+("\n" if displayNextWithAnd else " {\n"))
                    else:
                        lines.append(spaces+("&& " if isAnd else "if ") + str(event.data.actor.v.identifier)+"."+str(event.data.actor_query.v)+"("+str(event.data.params.data if event.data.params else '')+") in "+str(keyList)+("\n" if displayNextWithAnd else " {\n"))
                    if displayNextWithAnd:
                        print_event(event.data.cases[keyList[0]].v,indent,alreadySeen,lines,neededLabels,isAnd=True)
                    else:
                        print_event(event.data.cases[keyList[0]].v,indent+1,alreadySeen,lines,neededLabels)
                        lines.append(spaces+"}\n")
                else:
                    assert not isAnd
                    lines.append(spaces+"switch " + str(event.data.actor.v.identifier)+"."+str(event.data.actor_query.v)+"("+str(event.data.params.data if event.data.params else '')+") {\n")
                    for key in distinctKeys:
                        lines.append(spaces+"  case "+str(key[0] if len(key)==1 else key)+":\n")
                        print_event(event.data.cases[key[0]].v,indent+1,alreadySeen,lines,neededLabels)
                    lines.append(spaces+"}\n")
    elif isinstance(event.data, ForkEvent):
        lines.append('\n'+spaces+"fork")
        assert len(event.data.forks) == len(set([fork.v.name for fork in event.data.forks])) and len(event.data.forks) > 0
        for fork in event.data.forks:
            lines.append(" {\n")
            print_event(fork.v,indent+1,alreadySeen,lines,neededLabels)
            lines.append(spaces+"}")
        lines.append("\n")
        assert isinstance(event.data.join.v.data, JoinEvent)
        print_event(event.data.join.v,indent,alreadySeen,lines,neededLabels,noPrintNxt=noPrintNxt)
    elif isinstance(event.data, JoinEvent):
        lines.append('\n')
        if not noPrintNxt:
            print_event(event.data.nxt.v,indent,alreadySeen,lines,neededLabels)
    elif isinstance(event.data, SubFlowEvent):
        lines.append('\n'+spaces+"call " + event.data.res_flowchart_name+("." if event.data.res_flowchart_name else '')+event.data.entry_point_name+"("+str(event.data.params.data if event.data.params else '')+")\n\n")
        if not noPrintNxt:
            print_event(event.data.nxt.v,indent,alreadySeen,lines,neededLabels)
    return lines, neededLabels

if __name__ == "__main__":
    eventfolder = 'C:/Users/Matt/Documents/BotW/Event/'
    for fname in os.listdir(eventfolder):

        path = None
        if os.path.isdir(eventfolder+fname):
            path = eventfolder+fname+'/EventFlow/'+fname+'.bfevfl'
        elif fname.endswith('.bfevfl'):
            path = eventfolder+fname

        if path is None or not os.path.isfile(path):
            continue

        print(path)
        
        flow = evfl.EventFlow()
        with open(path, 'rb') as file:
            flow.read(file.read())

        flowchart = flow.flowchart
        outfile = open('event/'+fname.replace('.bfevfl','')+'.c','w',encoding='utf-8')
        outfile.write(print_flowchart(flowchart))
        outfile.close()
