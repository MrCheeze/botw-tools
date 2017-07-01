import aamp
import os
import pprint
import json
import xml.etree.ElementTree as ET

namefile = open('botw_names.json')
object_names = json.load(namefile)
namefile.close()

root = ET.parse('ActorInfo.product.xml').getroot()

actors = root.findall("./Actors/value[@generalLife]/xlink/..")

results = []
for actor in actors:
    if actor.findall("./xlink")[0].text != 'Weapon':
        continue
    name = actor.findall("./name")[0].text
    attack = int(actor.attrib['attackPower'])
    durability = int(actor.attrib['generalLife'])
    total_dmg = attack * durability
    if name in object_names:
        name = object_names[name] + ' (' + name + ')'
    results.append('total_dmg=%5d, attack=%3d, durability=%3d, name=%s' % (total_dmg, attack, durability, name))
results.sort(reverse=True)

for result in results:
    print(result)
