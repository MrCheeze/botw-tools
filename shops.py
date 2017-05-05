import xml.etree.ElementTree as ET
import json

namefile = open('botw_names.json')
object_names = json.load(namefile)
namefile.close()

root = ET.parse('ShopGameDataInfo.xml').getroot().find('./ShopAreaInfo/Values')

shops = {}

for node in root.findall('./*'):
    dealer = node.find('./Dealer').text
    item = node.find('./Item').text

    if dealer not in shops:
        shops[dealer] = []
    shops[dealer].append(item)

for dealer in sorted(shops):
    if dealer in object_names:
        print('--- '+object_names[dealer], '('+dealer+') ---')
    else:
        print('--- '+dealer+' ---')
    for item in sorted(shops[dealer]):
        print(object_names[item], '('+item+')')
    print()
