#!/usr/bin/python3
"""
minimun number of operations
"""


def minOperations(n):
    """
    n = Final number of H
    """
    Actual = 'H'
    operations = 0

    if type(n) is not int or n < 1:
        return 0

    while (n != len(Actual)):

        if operations == 0:
            CopyAll = Actual
            Paste = Actual + CopyAll
            operations += 2

        else:
            if (n % len(Actual) != 0):
                Paste = Actual + CopyAll
                operations += 1

            else:
                CopyAll = Actual
                Paste = Actual + CopyAll
                operations += 2

        Actual = Paste

    return operations
