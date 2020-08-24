#!/usr/bin/python3
"""
rain
"""


def rain(walls):
    """
    calculate how much water will be retained after it rains.
    """
    if len(walls) < 3:
        return 0
    total = 0
    for i in range(1, len(walls) - 1):
        if walls[i - 1] == 0 and walls[i + 1] == 0:
                total = total + walls[i]
    return total
