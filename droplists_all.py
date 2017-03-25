import aamp
import os
import json

namefile = open('botw_names.json')
object_names = json.load(namefile)
namefile.close()

for filename in os.listdir('all_bdrop'):

    name = filename.split('.')[0]

    if name in object_names:
        name = object_names[name]

    print('----- %s -----' % name)
    
    f=open('all_bdrop/' + filename,'rb')
    data = f.read()
    f.close()
    drop_data = aamp.parseAAMP(data)
    dropgroup_count = drop_data['SUBLISTS'][0][0]
    dropgroup_names = drop_data['SUBLISTS'][0][1:]

    for i in range(dropgroup_count):
        dropgroup_name = dropgroup_names[i]

        dropgroup_data = drop_data['SUBLISTS'][1+i]
        header = dropgroup_data[:5]
        drops = dropgroup_data[5:]
        if header[0] == header[1]:
            amount = str(header[0])
        else:
            amount = str(header[0])+'-'+str(header[1])
        print(dropgroup_name,'- x'+amount)
        for j in range(0,len(drops),2):
            obj = drops[j]
            if obj in object_names:
                obj = object_names[obj]
            print('%5.1f%% - ' % round(drops[j+1],5) + str(obj))
        print()
