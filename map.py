import struct
import pprint
import os
import json
import prod
import xml.etree.ElementTree as ET

namefile = open('botw_names.json')
object_names = json.load(namefile)
namefile.close()

objects = {}

for filename in os.listdir('mubin'):
    root = ET.parse('mubin/'+filename).getroot()

    dropactor_objs = root.findall('./*/value')

    for actor in dropactor_objs:
        name = actor.findall('./UnitConfigName')[0].text
        coords = [node.text for node in actor.findall('./Translate/value')]
        if len(coords) == 0:
            continue
        drop_actors = actor.findall('./_Parameters/DropActor')
        drop_tables = actor.findall('./_Parameters/DropTable')
        
        if name in object_names:
            nice_name = object_names[name]
        else:
            nice_name = name
            
        if len(drop_actors):
            drop_actor = drop_actors[0].text
            name = name+':'+drop_actor
            nice_name = nice_name+':'+object_names[drop_actor]
        elif len(drop_tables):
            drop_table = drop_tables[0].text
            if drop_table != 'Normal':
                name = name+':'+drop_table
                nice_name = nice_name+':'+drop_table
        if name not in objects:
            objects[name] = {'display_name':nice_name, 'locations':[]}
        objects[name]['locations'].append((round(float(coords[0][:-1]),2), round(float(coords[-1][:-1]),2)))


for filename in os.listdir('blwp'):
    f=open('blwp/'+filename,'rb')
    data = f.read()
    f.close()
    chunk_objects = prod.parseProd(data)
    for name in chunk_objects:
        if name in object_names:
            nice_name = object_names[name]
        else:
            nice_name = name
        if name not in objects:
            objects[name] = {'display_name':nice_name, 'locations':[]}
        objects[name]['locations'] += [(round(x,2),round(z,2)) for x,y,z in chunk_objects[name]]

outfile = open('map_locations.js','w')
outfile.write('var locations = ')
json.dump(objects, outfile, sort_keys=True,separators=(',', ':'))
outfile.write(';\n')
outfile.close()
