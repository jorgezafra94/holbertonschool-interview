#!/usr/bin/python3
"""
You have n number of locked boxes in front of you. Each box is numbered
sequentially from 0 to n - 1 and each box may contain keys to the other boxes.

the idea is to create a program to say if all the boxes can be opened or not
 """


def canUnlockAll(boxes):
    """
    canUnlockAll: function that says is an amount of boxes can be opened
              the box[0] is by default opened
    @boxes: list of boxes to open
    Return: - true: if all boxes inside boxes could be opened
            - false: if not all could be opened
    """
    if (len(boxes) == 0 or type(boxes) is not list):
        return False
    for elem in boxes:
        if type(elem) is not list:
            return False

    openBox = [0]

    while (1):
        cajas = []
        for elem in openBox:
            for keys in boxes[elem]:
                if (keys < len(boxes)):
                    cajas.append(keys)
        cajas = list(set(cajas))
        flag = 0
        for elem in cajas:
            if (elem not in openBox):
                openBox.append(elem)
                flag = 1
        if (flag == 0):
            break

    if (len(openBox) == len(boxes)):
        return True
    return False
