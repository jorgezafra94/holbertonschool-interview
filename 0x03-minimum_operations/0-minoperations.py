#!/usr/bin/python3
"""
minimun number of operations
"""


def minOperations(n):
    """
    n = Final number of H
    """
    Actual 'H'
    CopyAll = Actual
    operations = 0

    if type(n) is not int or n < 2:
        return 0

    else:
        while (len(Actual) != n):

            if (n % len(Actual) == 0):
                CopyAll = Actual
                Paste = Actual + CopyAll
                operations += 2

            else:
                Paste = Actual + CopyAll
                operations += 1

            Actual = Paste

        return operations
