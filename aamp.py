import struct
import pprint

class UnknownNodeTypeException(Exception):
    pass

def parseAAMP(data, offset=0x34, datatype='node'):

    assert data[0x00:0x04] == b'AAMP'
    assert data[0x30:0x34] == b'xml\0'

    if datatype == 'node':
        
        next_offset1,next_length1,next_type1,   \
        next_offset2,next_length2,next_type2 =  \
        struct.unpack('<HBBHBB',data[offset+4:offset+12])

        assert next_type1 == 0
        assert next_type2 == 0

        next_offset1 = offset + 4*next_offset1
        next_offset2 = offset + 4*next_offset2

        parsed_list1 = []
        for i in range(next_length1):
            parsed_list1.append(parseAAMP(data, next_offset1 + 12*i, 'node'))
            
        parsed_list2 = []
        for i in range(next_length2):
            parsed_list2.append(parseAAMP(data, next_offset2 + 8*i, 0))
            
        return {'SUBNODES':parsed_list1, 'SUBLISTS':parsed_list2}
    
    elif datatype == 0:
        
        next_offset,next_length,next_type =     \
        struct.unpack('<HBB',data[offset+4:offset+8])

        next_offset = offset + 4*next_offset

        if next_type == 0:
            parsed_list = []
            for i in range(next_length):
                parsed_list.append(parseAAMP(data, next_offset + 8*i, next_type))
            return parsed_list
        else:
            assert next_length == 0
            return parseAAMP(data, next_offset, next_type)

    # Datatypes are tentative guesses for now
    elif datatype == 1:
        return struct.unpack('<f',data[offset:offset+4])[0]
    elif datatype == 2:
        return struct.unpack('<I',data[offset:offset+4])[0]
    elif datatype == 4:
        return struct.unpack('<f',data[offset:offset+4])
    elif datatype == 6:
        return struct.unpack('<f',data[offset:offset+4])
    elif datatype in (7, 8, 0xF, 0x14):
        try:
            return data[offset:].split(b'\0',1)[0].decode('ascii')
        except UnicodeDecodeError:
            return data[offset:].split(b'\0',1)[0]
    elif datatype == 0x11:
        return struct.unpack('<I',data[offset:offset+4])[0]
    else:
        raise UnknownNodeTypeException('0x%X: 0x%02X' % (offset, datatype))




if __name__ == '__main__':
    f=open('Item_Ore_A.bmodellist','rb')
    data = f.read()
    f.close()
    pprint.pprint(parseAAMP(data))
