#!/usr/bin/python3
"""
data is a valid UTF-8
"""


def validUTF8(data):
    """
    * Prototype: def validUTF8(data)
    * Return: True if data is a valid UTF-8 encoding, else return False
    * A character in UTF-8 can be 1 to 4 bytes long
    * The data set can contain multiple characters
    * The data will be represented by a list of integers
    * Each integer represents 1 byte of data, therefore you only need to
      handle the 8 least significant bits of each integer
    """
    if data is None or len(data) == 0:
        return False

    byte = 0
    valid = []
    for i in data:
        # number of bytes, 255 are 8 bytes in 1
        result = i & 255
        if byte == 0:
            # 1byte
            if result < 128:
                valid.append(True)
            # 2bytes
            elif result >= 192 and result <= 223:
                byte = 1
                valid.append(True)
            #  3bytes
            elif result >= 224 and result <= 239:
                byte = 2
                valid.append(True)
            # 4bytes
            elif result >= 240 and result <= 247:
                byte = 3
                valid.append(True)
            else:
                valid.append(False)

        else:
            if result >= 128 and result <= 191:
                valid.append(True)
            else:
                valid.append(False)
            byte = byte - 1

    result = all(valid)
    return result
