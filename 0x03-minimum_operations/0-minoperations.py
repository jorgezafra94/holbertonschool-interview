#!/usr/bin/python3
"""
minimun number of operations
"""


def minOperations(n):
    """
    n = Final number of H
    """
    Actual = 1
    CopyAll = 0
    operations = 0

    if type(n) is not int or n < 2:
        return 0

    else:
        while (Actual != n):

            if (n % Actual == 0):
                CopyAll = Actual
                Paste = Actual + CopyAll
                operations += 2

            else:
                Paste = Actual + CopyAll
                operations += 1

            Actual = Paste

        return operations
