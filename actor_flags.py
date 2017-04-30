import aamp
import os
import json

namefile = open('botw_names.json')
object_names = json.load(namefile)
namefile.close()

all_flags = {}

for filename in os.listdir('bxml'):

    f=open('bxml/' + filename,'rb')
    data = aamp.parseAAMP(f.read())
    f.close()

    actor = filename.split('.')[0]
    if actor in object_names:
        actor = object_names[actor] + ' (' + actor + ')'

    if len(data['SUBLISTS']) > 1:
        actor_flags = data['SUBLISTS'][1]
    else:
        actor_flags = []
    
    for flag in actor_flags:
        if flag not in all_flags:
            all_flags[flag] = []
        all_flags[flag].append(actor)

for flag in sorted(all_flags):
    print(flag, len(all_flags[flag]))

while True:
    a=input()
    if a in all_flags:
        print(all_flags[a])
