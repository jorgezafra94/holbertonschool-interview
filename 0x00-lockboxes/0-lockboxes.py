#!/usr/bin/python3
"""
You have n number of locked boxes in front of you. Each box is numbered
sequentially from 0 to n - 1 and each box may contain keys to the other boxes.

the idea is to create a program to say if all the boxes can be opened or not
"""


def recursion(boxes, openBox, current):
    """
    recursion: function that go through all the posible keys in order
               to return an array with all the opened boxes.
               the idea is to save the different keys to get only the ones that
               we need and not repeated ones
    @boxes: list of boxes to open
    @openBox: list with opened boxes
    @current: actual box
    Return: an array with boxes that could be opened
    """
    if (len(current) > 0):
        for elem in current:
            if (elem < len(boxes) and elem not in openBox):
                openBox.append(elem)
                r = recursion(boxes, openBox, boxes[elem])
                openBox = r
        return openBox
    else:
        return openBox


def canUnlockAll(boxes):
    """
    canUnlockAll: function that says is an amount of boxes can be opened
              the box[0] is by default opened
    @boxes: list of boxes to open
    Return: - true: if all boxes inside boxes could be opened
            - false: if not all could be opened
    """
    if not boxes:
        return False
    if(len(boxes) == 0 or type(boxes) is not list):
        return False
    for elem in boxes:
        if type(elem) is not list:
            return False
    result = recursion(boxes, [0], boxes[0])
    if(len(result) == len(boxes)):
        return True
    return False
