import xml.etree.ElementTree as ET
import os
import pprint
import struct
import json
import datetime
import sys

class UnknownNodeTypeException(Exception):
    pass

gamedatafile = open('gamedata.json')
gamedata = json.load(gamedatafile)
gamedatafile.close()

def parseSave(savefile_folder, skip_bools=False):
    header = parseSaveFile(savefile_folder + '/caption.sav', skip_bools)
    main_data = parseSaveFile(savefile_folder + '/game_data.sav', skip_bools)
    date = datetime.datetime.fromtimestamp(header['LastSaveTime_Lower']).strftime('%Y-%m-%d %H:%M:%S')
    return {'DATE':date, 'HEADER':header, 'MAIN':main_data}
    
def parseSaveFile(savefile, skip_bools=False):
    f = open(savefile,'rb')
    data = f.read()
    f.close()
    assert data[:0xC] == b'\x00\x00\x24\xee\xff\xff\xff\xff\x00\x00\x00\x01'
    assert data[-4:] == b'\xff\xff\xff\xff'

    parsed_data = {}

    i = 0xC
    while i < len(data)-4:
        hashvalue, entrydata = struct.unpack('>i4s', data[i:i+8])
        if str(hashvalue) not in gamedata:
            i += 8
            continue
        datatype, name = gamedata[str(hashvalue)]
        if datatype=='s32':
            parsed_data[name] = struct.unpack('>i', entrydata)[0]
            i += 8
        elif datatype=='bool':
            if not skip_bools:
                parsed_data[name] = bool(struct.unpack('>i', entrydata)[0])
            i += 8
        elif datatype=='string256':
            bytestr = b''
            for j in range(i,i+256*2,8):
                bytestr += data[j+4:j+8]
            parsed_data[name] = bytestr.split(b'\0',1)[0].decode('ascii')
            i += 256*2
        elif datatype=='s32_array':
            if name not in parsed_data:
                parsed_data[name] = []
            parsed_data[name].append(struct.unpack('>i', entrydata)[0])
            i += 8
        elif datatype=='string64_array':
            if name not in parsed_data:
                parsed_data[name] = []
            bytestr = b''
            for j in range(i,i+64*2,8):
                bytestr += data[j+4:j+8]
            parsed_data[name].append(bytestr.split(b'\0',1)[0].decode('ascii'))
            i += 64*2
        elif datatype=='f32':
            parsed_data[name] = struct.unpack('>f', entrydata)[0]
            i += 8
        elif datatype=='string':
            bytestr = b''
            for j in range(i,i+32*2,8):
                bytestr += data[j+4:j+8]
            parsed_data[name] = bytestr.split(b'\0',1)[0].decode('ascii')
            i += 32*2
        elif datatype=='string64':
            bytestr = b''
            for j in range(i,i+64*2,8):
                bytestr += data[j+4:j+8]
            parsed_data[name] = bytestr.split(b'\0',1)[0].decode('ascii')
            i += 64*2
        elif datatype=='vector3f':
            parsed_data[name] = []
            for j in range(i,i+3*8,8):
                parsed_data[name].append(struct.unpack('>f', data[j+4:j+8])[0])
            i += 3*8
        elif datatype=='string256_array':
            if name not in parsed_data:
                parsed_data[name] = []
            bytestr = b''
            for j in range(i,i+256*2,8):
                bytestr += data[j+4:j+8]
            parsed_data[name].append(bytestr.split(b'\0',1)[0].decode('ascii'))
            i += 256*2
        elif datatype=='bool_array':
            if name not in parsed_data:
                parsed_data[name] = []
            parsed_data[name].append(bool(struct.unpack('>i', entrydata)[0]))
            i += 8
        elif datatype=='vector2f_array':
            if name not in parsed_data:
                parsed_data[name] = []
            parsed_data[name].append([])
            for j in range(i,i+2*8,8):
                parsed_data[name][-1].append(struct.unpack('>f', data[j+4:j+8])[0])
            i += 2*8
        elif datatype=='f32_array':
            if name not in parsed_data:
                parsed_data[name] = []
            parsed_data[name].append(struct.unpack('>f', entrydata)[0])
            i += 8
        elif datatype=='vector3f_array':
            if name not in parsed_data:
                parsed_data[name] = []
            parsed_data[name].append([])
            for j in range(i,i+3*8,8):
                parsed_data[name][-1].append(struct.unpack('>f', data[j+4:j+8])[0])
            i += 3*8
        else:
            #print(parsed_data)
            print('%08X'%hashvalue, hashvalue, datatype, name, entrydata)
            raise UnknownNodeTypeException(datatype)

    return parsed_data

if __name__ == '__main__':
    if 2 <= len(sys.argv) <= 3:
        parsed_data = parseSave(sys.argv[1])
        print(parsed_data['DATE'])
        print(parsed_data['HEADER'])
        for x in ('WM_BloodyDay','WM_BloodyMoonTimer','WM_NumberOfDays',
                  'WM_Time','WM_TimeDivision','WM_bloodyEndReserveTimer'):
            print(x, parsed_data['MAIN'][x])
        if len(sys.argv) == 3:
            f = open(sys.argv[2],'w')
            json.dump(parsed_data, f, sort_keys=True, indent=4)
            f.close()
            print('Save dumped to ' + sys.argv[2])
    else:
        print('Usage: python save.py savefolder [outfile.json]')

