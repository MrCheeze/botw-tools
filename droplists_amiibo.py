import aamp
import json
import xml.etree.ElementTree as ET

namefile = open('botw_names.json')
object_names = json.load(namefile)
namefile.close()

amiibos = [
    ("Item_Amiibo_DropTable_001.bdrop","Ganondorf"),
    ("Item_Amiibo_DropTable_002.bdrop","Toon/Wind Waker Link"),
    ("Item_Amiibo_DropTable_003.bdrop","Sheik"),
    ("Item_Amiibo_DropTable_004.bdrop","Unknown/Unused?"),
    ("Item_Amiibo_DropTable_005.bdrop","Unknown/Unused?"),
    ("Item_Amiibo_DropTable_006.bdrop","Unknown/Unused?"),
    ("Item_Amiibo_DropTable_007.bdrop","Smash/Twilight Link"),
    ("Item_Amiibo_DropTable_008.bdrop","Archer Link"),
    ("Item_Amiibo_DropTable_009.bdrop","Rider Link"),
    ("Item_Amiibo_DropTable_010.bdrop","BotW Zelda"),
    ("Item_Amiibo_DropTable_012.bdrop","Daruk"),
    ("Item_Amiibo_DropTable_013.bdrop","Revali"),
    ("Item_Amiibo_DropTable_014.bdrop","Mipha"),
    ("Item_Amiibo_DropTable_015.bdrop","Urbosa"),
    ("Item_Amiibo_DropTable_016.bdrop","Guardian"),
    ("Item_Amiibo_DropTable_017.bdrop","Bokoblin"),
    ("Item_Amiibo_DropTable_018.bdrop","Ocarina of Time Link"),
    ("Item_Amiibo_DropTable_019.bdrop","Majora's Mask Link"),
    ("Item_Amiibo_DropTable_020.bdrop","Smash/Twilight Zelda"),
    ("Item_Amiibo_DropTable_021.bdrop","Skyward Sword Link"),
    ("Item_Amiibo_DropTable_022.bdrop","8-Bit Link"),
    ("Item_Amiibo_DropTable_023.bdrop","Toon/Wind Waker Zelda"),
    ("Item_Amiibo_DropTable_Common.bdrop","Non-Zelda Series Amiibo"),
    ("Barrel.bdrop","Barrel"),
    ("Kibako_Contain_01.bdrop","Wooden Box"),
    ("Kibako_Contain_02.bdrop","Iron Box")
]

root = ET.parse('ActorInfo.product.xml').getroot()

values = {}
damages = {}

for item in root.findall("./Actors/value[@itemSellingPrice]"):
    name = item.findall("./name")[0].text
    if 'Arrow' in name or 'Weapon_' in name:
        continue
    value = int(item.attrib["itemSellingPrice"])
    values[name] = value
for item in root.findall("./Actors/value[@rupeeRupeeValue]"):
    name = item.findall("./name")[0].text
    value = int(item.attrib["rupeeRupeeValue"])
    values[name] = value
for item in root.findall("./Actors/value[@attackPower]"):
    name = item.findall("./name")[0].text
    damage = int(item.attrib["attackPower"])
    damages[name] = damage

for filename, amiibo_name in amiibos:

    print('----- %s (%s) -----' % (amiibo_name, filename.strip('.bdrop')))
    
    f=open('amiibo_bdrop/' + filename,'rb')
    data = f.read()
    f.close()
    drop_data = aamp.parseAAMP(data)
    dropgroup_count = drop_data['SUBLISTS'][0][0]
    dropgroup_names = drop_data['SUBLISTS'][0][1:]

    for i in range(dropgroup_count):
        dropgroup_name = dropgroup_names[i]

        if filename in ["Barrel.bdrop",
          "Kibako_Contain_01.bdrop",
          "Kibako_Contain_02.bdrop"] and 'Amiibo' not in dropgroup_name:
            continue
        
        dropgroup_data = drop_data['SUBLISTS'][1+i]
        header = dropgroup_data[:5]
        drops = dropgroup_data[5:]
        if header[0] == header[1]:
            amount = str(header[0])
        else:
            amount = str(header[0])+'-'+str(header[1])
        print(dropgroup_name,'- x'+amount)
        expected_rupees = 0.0
        for j in range(0,len(drops),2):
            obj = drops[j]
            rupees = -1
            damage = -1
            if obj in values:
                rupees = values[obj]
            if obj in damages:
                damage = damages[obj]
                
            if obj in object_names:
                obj = object_names[obj]
            print('%5.1f%% - %s' % (round(drops[j+1],5), obj),end='')
            if damage > 0:
                print(' (%d damage)' % damage)
            elif rupees > 0:
                print(' (%d rupees)' % rupees)
                expected_rupees += rupees * drops[j+1]/100 * (header[1]+header[0])/2
            else:
                print()
        print('Expected rupees -', round(expected_rupees,6))
        print()
        
