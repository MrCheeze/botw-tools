import aamp
import pprint



horses={}

for filename in ['GameRomHorse', 'GameRomHorse00L', 'GameRomHorse00S',
                 'GameRomHorse01', 'GameRomHorse02', 'GameRomHorse03',
                 'GameRomHorse04', 'GameRomHorse05', 'GameRomHorse06',
                 'GameRomHorse07', 'GameRomHorse08', 'GameRomHorse09',
                 'GameRomHorse10', 'GameRomHorse11', 'GameRomHorse12',
                 'GameRomHorse13', 'GameRomHorse14', 'GameRomHorse15',
                 'GameRomHorse16', 'GameRomHorse17', 'GameRomHorse18',
                 'GameRomHorse19', 'GameRomHorse20', 'GameRomHorse21',
                 'GameRomHorse22', 'GameRomHorse23', 'GameRomHorseBone',
                 'GameRomHorseEpona', 'GameRomHorseNushi', 'GameRomHorseZelda']:
    f=open('horses/'+filename+'.bgparamlist','rb')
    data=f.read()
    f.close()
    parsed_data = aamp.parseAAMP(data)['SUBLISTS']
    health = parsed_data[1][1]
    speed = parsed_data[4][2]
    wild = bool(parsed_data[4][3])
    spurs = parsed_data[4][-3]
    taming_difficulty = parsed_data[5][1]
    horses[filename] = {'spurs':spurs, 'speed':speed, 'wild':wild, 'taming_difficulty':taming_difficulty, 'health':health}

for filename in ['WildHorseCreateTag','WildHorseCreateTag01',
                 'WildHorseCreateTag02','WildHorseCreateTag03']:
    f=open('horses/'+filename+'.bgparamlist','rb')
    data=f.read()
    f.close()
    parsed_data = aamp.parseAAMP(data)['SUBLISTS'][0]
    horse_actors = parsed_data[0].split(',')
    print('-----',filename,'-----\n\nLeader Horse:')
    print(parsed_data[1], horses[parsed_data[1]])
    print('\nFollower Horses:')
    for actor in horse_actors:
        print(actor, horses[actor])
    print('\n')

print('----- Special Horses -----\n\nBokoblin Horses:')
for actor in ['GameRomHorse21', 'GameRomHorse22', 'GameRomHorse23']:
        print(actor, horses[actor])
print('\nStalhorse:\nGameRomHorseBone', horses['GameRomHorseBone'])
print('\nEpona:\nGameRomHorseEpona', horses['GameRomHorseEpona'])
print('\nLord of the Mountain:\nGameRomHorseNushi', horses['GameRomHorseNushi'])
print('\nWhite Horse:\nGameRomHorseZelda', horses['GameRomHorseZelda'])
print('\nGiant Horse:\nGameRomHorse00L', horses['GameRomHorse00L'])
print('\nDonkey:\nGameRomHorse00S', horses['GameRomHorse00S'])
