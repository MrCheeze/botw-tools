import aamp
import os
import pprint
import json
import xml.etree.ElementTree as ET

namefile = open('botw_names.json')
object_names = json.load(namefile)
namefile.close()

root = ET.parse('ActorInfo.product.xml').getroot()

actors = root.findall("./Actors/value[@itemSellingPrice]")

results = []
for actor in actors:
    sell_price = int(actor.attrib['itemSellingPrice'])
    if sell_price <= 0:
        continue
    name = actor.findall("./name")[0].text
    pretty_name = name
    if name in object_names:
        pretty_name = object_names[name]
    actor_type = actor.findall("./profile")[0].text
    results.append('actor_type=%s, sell_price=%4d, name=%s (%s)' % (actor_type, sell_price, pretty_name, name))
results.sort(reverse=True)

for result in results:
    print(result)
