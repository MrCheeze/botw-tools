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
        coords = [float(node.text[:-1]) for node in actor.findall('./Translate/value')]
        if len(coords) == 0:
            continue
        scale = [float(node.text[:-1]) for node in actor.findall('./Scale/value')]
        rotation = [float(node.text[:-1]) for node in actor.findall('./Rotate/value')]
        if len(rotation) == 0:
            if 'Rotate' in actor.attrib:
                rotation = [0,float(actor.attrib['Rotate'][:-1]),0]
            else:
                rotation = [0,0,0]
        drop_tables = actor.findall('./_Parameters/DropTable')
        drop_actors = (actor.findall('./_Parameters/DropActor') +
                       actor.findall('./_Parameters/RideHorseName') +
                       actor.findall('./_Parameters/EquipItem1') +
                       actor.findall('./_Parameters/EquipItem2') +
                       actor.findall('./_Parameters/EquipItem3') +
                       actor.findall('./_Parameters/EquipItem4') +
                       actor.findall('./_Parameters/EquipItem5') +
                       actor.findall('./_Parameters/ArrowName'))
        
        if name in object_names:
            nice_name = object_names[name]
        else:
            nice_name = name
            
        if len(drop_tables):
            drop_table = drop_tables[0].text
            if drop_table != 'Normal':
                name = name+':'+drop_table
                nice_name = nice_name+':'+drop_table
        for drop_actor in drop_actors:
            drop_actor = drop_actor.text
            if drop_actor in ('Normal', 'Default', 'NormalArrow'):
                continue
            name += ':' + drop_actor
            nice_name += ':' + object_names[drop_actor]

        if name not in objects:
            objects[name] = {'display_name':nice_name, 'locations':[]}
        objects[name]['locations'].append([round(coords[0],2), round(coords[-1],2)])
        #if len(scale):
        #    objects[name]['locations'][-1].append({'width':scale[0],'height':scale[-1],'rotation':rotation[1]})

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
