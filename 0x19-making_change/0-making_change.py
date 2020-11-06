#!/usr/bin/python3
"""
number of coins to get a number
"""


def recursive(coins, total, pos, final, count):
    """
    this is the recursive function to know how many
    coins you will need to complete the total
    """
    if total == 0:
        return count

    if total >= coins[pos]:
        new_total = total - coins[pos]
        result = recursive(coins, new_total, pos, final, count + 1)
        return result

    else:
        if (pos + 1) < final:
            result = recursive(coins, total, pos + 1, final, count)
            return result
        else:
            return -1


def makeChange(coins, total):
    """
    Return: fewest number of coins needed to meet total
    * If total is 0 or less, return 0
    * f total cannot be met by any number of coins you have
      return -1
    """

    if total <= 0:
        return 0

    sorted_coins = sorted(coins, reverse=True)
    aux = len(sorted_coins)

    for pos in range(aux):
        count = 0
        result = recursive(sorted_coins, total, pos, aux, count)
        if result > 0:
            return result
    return -1
