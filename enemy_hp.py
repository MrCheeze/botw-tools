import aamp
import os
import pprint
import json
import xml.etree.ElementTree as ET

namefile = open('botw_names.json')
object_names = json.load(namefile)
namefile.close()

root = ET.parse('ActorInfo.product.xml').getroot()

actors = root.findall("./Actors/value[@enemyRank]")

results = []
for actor in actors:
    name = actor.findall("./name")[0].text
    hp = int(actor.attrib['generalLife'])
    pretty_name = name
    if name in object_names:
        pretty_name = object_names[name]
    results.append('hp=%4d, name=%s (%s)' % (hp, pretty_name, name))
results.sort(reverse=True)

for result in results:
    print(result)
