import os
import json
import xml.etree.ElementTree as ET

gamedata = {}

for filename in os.listdir('gamedata'):
    root = ET.parse('gamedata/'+filename).getroot()

    datatype = root.find('./*').tag.rstrip('_data')

    nodes = root.findall('./*/*')

    for node in nodes:
        name = node.find('./DataName').text
        hashvalue = int(node.attrib['HashValue'])
        
        gamedata[hashvalue] = [datatype, name]

f=open('gamedata.json','w')
json.dump(gamedata, f, sort_keys=True)
f.close()
