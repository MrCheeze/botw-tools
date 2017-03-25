import aamp
import os
import pprint
import json
import xml.etree.ElementTree as ET

namefile = open('botw_names.json')
object_names = json.load(namefile)
namefile.close()

default_durations = {
    "AttackUp": 50,
    "DefenseUp": 50,
    "ExGutsMaxUp": 0,
    "Fireproof": 150,
    "GutsRecover": 0,
    "LifeMaxUp": 0,
    "MovingSpeed": 60,
    "None": 30,
    "Quietness": 120,
    "ResistCold": 150,
    "ResistElectric": 150,
    "ResistHot": 150
}

ingredients = {}
spices = {}

root = ET.parse('ActorInfo.product.xml').getroot()

for child in root[0]:
    if 'cook' in str(child.attrib):
        name = '?'
        for subchild in child:
            if subchild.tag == 'name':
                internal_name = subchild.text
                name = object_names[internal_name]
        quarter_hearts_restored, duration, crit_odds = int(child.attrib['cookSpiceBoostHitPointRecover']), int(child.attrib['cookSpiceBoostEffectiveTime']), int(child.attrib['cookSpiceBoostSuccessRate'])
        spices[name] = ['None', 0, duration, quarter_hearts_restored/4, crit_odds]
    if 'cure' in str(child.attrib):
        internal_name = '?'
        name = '?'
        boost_type = '?'
        for subchild in child:
            if subchild.tag == 'name':
                internal_name = subchild.text
            if subchild.tag == 'cureItemEffectType':
                boost_type = subchild.text
        if (internal_name.startswith('Item_Roast') or internal_name.startswith('Item_Cook_') or internal_name.startswith('Item_Chilled') or
            internal_name.startswith('Item_Plant_') or internal_name.startswith('Animal_Fish_') or internal_name.startswith('Item_InsectGet_') or internal_name.startswith('Item_MushroomGet_')):
            continue
        name = object_names[internal_name]
        half_hearts_restored = int(child.attrib['cureItemHitPointRecover'])
        boost_level = int(child.attrib['cureItemEffectLevel'])
        try:
            unknown = int(child.attrib['cureItemEffectiveTime'])
        except KeyError:
            unknown = 0
        if boost_type == 'LifeMaxUp':
            boost_level /= 4
        if boost_type == 'None':
            boost_level = 0
        duration = default_durations[boost_type]
        ingredients[name] = [boost_type, boost_level, duration, half_hearts_restored/2, 0]
        
results = []

for name in set(list(ingredients) + list(spices)):
    if (name in spices) and (name in ingredients):
        boost_data = ingredients[name]
        boost_data2 = spices[name]
        boost_data[1] += boost_data2[1]
        boost_data[2] += boost_data2[2]
        boost_data[3] += boost_data2[3]
        boost_data[4] += boost_data2[4]
    elif name in spices:
        boost_data = spices[name]
    else:
        boost_data = ingredients[name]
    boost_data = boost_data + [name]
    results.append('%s Lv. %d (%d seconds), %g hearts, %d%% crit chance - %s' % tuple(boost_data))

for result in sorted(results):
    print(result)

# A crit will randomly apply one of the following effects, out of whichever is possible. Crits will always trigger in the last half hour before a blood moon.
#   boost red hearts by 3
#   boost strength by 1
#   boost duration by 5:00

# monster spice randomly changes properties, sometimes dramatically.

# EVERY elixir gets a 30 second bonus

# adding Goron Spice (None Lv. 1) does NOT boost level

# note to self: will burning a frozen food get you heat resistance?

# items in both lists: Courser Bee Honey, Monster Extract, Chickaloo Tree Nut, Acorn, Hylian Rice, Tabantha Wheat, Fresh Milk, Goat Butter, Cane Sugar, Bird Egg, Goron Spice
# non-enemy items in second list: Rock Salt, Star Fragment, dragon parts (also ancient parts)

# AttackUp - mid=5, high=7
# DefenseUp - mid=5, high=7
# ExGutsMaxUp - 1=20% 2=20% 3=20% 4=40% 5=40% 6=60% 7=60% 8=80% 9=80% 10=100% 11=100% 12=120% 13=120% 14=140% 15=140% 16=160% 17=160% 18=180% 19=180% 20=200%
# Fireproof - high=7
# GutsRecover - 1=20%, 2=40%, 3=80%, 4=100%, 5=140% 6=160% 7=240% 8=280% 9=300%
# LifeMaxUp - n/a
# MovingSpeed - mid=5, high=7
# None - n/a
# Quietness - mid=6, high=9
# ResistCold - high=6
# ResistElectric - mid=4, high=6
# ResistHot - high=6

# due to an error, the second level of ResistCold is sometimes referred to as "mid-level" in food, but "high-level" as elixir.


