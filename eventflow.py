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
    
def print_event(event,indent,alreadySeen,lines,neededLabels):
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
        print_event(event.data.nxt.v,indent,alreadySeen,lines,neededLabels)
        pass
    elif isinstance(event.data, SwitchEvent):
        if len(event.data.cases) > 0:
            isTrueFalse = len(event.data.cases) <= 2
            for key in event.data.cases:
                if key != 0 and key != 1:
                    isTrueFalse = False
            if isTrueFalse:
                key = list(event.data.cases.keys())[0]
                lines.append(spaces+"if " + ('' if key else '!') + str(event.data.actor.v.identifier)+"."+str(event.data.actor_query.v)+"("+str(event.data.params.data if event.data.params else '')+") {\n")
                print_event(event.data.cases[key].v,indent+1,alreadySeen,lines,neededLabels)
                if len(event.data.cases) > 1:
                    key = list(event.data.cases.keys())[1]
                    lines.append(spaces+"} else {\n")
                    print_event(event.data.cases[key].v,indent+1,alreadySeen,lines,neededLabels)
                lines.append(spaces+"}\n")
            elif len(event.data.cases) == 1:
                key = list(event.data.cases.keys())[0]
                lines.append(spaces+"if " + str(event.data.actor.v.identifier)+"."+str(event.data.actor_query.v)+"("+str(event.data.params.data if event.data.params else '')+") == "+str(key)+" {\n")
                print_event(event.data.cases[key].v,indent+1,alreadySeen,lines,neededLabels)
                lines.append(spaces+"}\n")
            else:
                lines.append(spaces+"switch " + str(event.data.actor.v.identifier)+"."+str(event.data.actor_query.v)+"("+str(event.data.params.data if event.data.params else '')+") {\n")
                for key in event.data.cases:
                    lines.append(spaces+"  case "+str(key)+":\n")
                    print_event(event.data.cases[key].v,indent+1,alreadySeen,lines,neededLabels)
                lines.append(spaces+"}\n")
    elif isinstance(event.data, ForkEvent):
        lines.append('\n'+spaces+"fork")
        for fork in event.data.forks:
            lines.append(" {\n")
            print_event(fork.v,indent+1,alreadySeen,lines,neededLabels)
            lines.append(spaces+"}")
        lines.append("\n")
        print_event(event.data.join.v,indent,alreadySeen,lines,neededLabels)
        pass
    elif isinstance(event.data, JoinEvent):
        lines.append('\n')
        print_event(event.data.nxt.v,indent,alreadySeen,lines,neededLabels)
        pass
    elif isinstance(event.data, SubFlowEvent):
        lines.append('\n'+spaces+"call " + event.data.res_flowchart_name+("." if event.data.res_flowchart_name else '')+event.data.entry_point_name+"("+str(event.data.params.data if event.data.params else '')+")\n\n")
        print_event(event.data.nxt.v,indent,alreadySeen,lines,neededLabels)
        pass
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
