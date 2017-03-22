import aamp
import json

namefile = open('botw_names.json')
object_names = json.load(namefile)
namefile.close()

amiibos = [
    ("Item_Amiibo_DropTable_001.bdrop","Ganondorf"),
    ("Item_Amiibo_DropTable_002.bdrop","Toon Link (Smash/Wind Waker)"),
    ("Item_Amiibo_DropTable_003.bdrop","Sheik"),
    ("Item_Amiibo_DropTable_004.bdrop","Unknown/Unused"),
    ("Item_Amiibo_DropTable_005.bdrop","Unknown/Unused"),
    ("Item_Amiibo_DropTable_006.bdrop","Unknown/Unused"),
    ("Item_Amiibo_DropTable_007.bdrop","Smash Link"),
    ("Item_Amiibo_DropTable_008.bdrop","Archer Link"),
    ("Item_Amiibo_DropTable_009.bdrop","Rider Link"),
    ("Item_Amiibo_DropTable_010.bdrop","BotW Zelda"),
    ("Item_Amiibo_DropTable_016.bdrop","Guardian"),
    ("Item_Amiibo_DropTable_017.bdrop","Bokoblin"),
    ("Item_Amiibo_DropTable_018.bdrop","Ocarina of Time Link"),
    ("Item_Amiibo_DropTable_019.bdrop","Unreleased Majora's Mask Link"),
    ("Item_Amiibo_DropTable_020.bdrop","Smash Zelda"),
    ("Item_Amiibo_DropTable_021.bdrop","Unreleased Skyward Sword Link"),
    ("Item_Amiibo_DropTable_022.bdrop","8-Bit Link"),
    ("Item_Amiibo_DropTable_023.bdrop","Toon Zelda"),
    ("Item_Amiibo_DropTable_Common.bdrop","Non-Zelda Series Amiibo"),
    ("Barrel.bdrop","Barrel"),
    ("Kibako_Contain_01.bdrop","Wooden Box"),
    ("Kibako_Contain_02.bdrop","Iron Box")
]

for filename, amiibo_name in amiibos:

    print('----- %s -----' % amiibo_name)
    
    f=open(filename,'rb')
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
        for j in range(0,len(drops),2):
            obj = drops[j]
            if obj in object_names:
                obj = object_names[obj]
            print('%5.1f%% - ' % round(drops[j+1],5) + obj)
        print()
