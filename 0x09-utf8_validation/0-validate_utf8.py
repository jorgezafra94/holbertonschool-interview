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

    arr = [128, 64, 32, 16, 8, 4, 2, 1]
    valid = []
    for elem in data:
        aux = elem
        for i in range(len(arr)):
            if aux >= arr[i]:
                aux = aux - arr[i]

        if aux == 0:
            valid.append(True)
        else:
            valid.append(False)

    answer = all(valid)
    return answer
