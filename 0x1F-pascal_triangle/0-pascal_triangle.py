#!/usr/bin/python3
"""
pascal triangle
"""


def suma(my_list):
    """
    get the sum of the actual vector
    * my_list: list to go over
    return: a list with the sums inside the list
    """
    sum_list = []
    first = my_list[0]
    for i in range(1, len(my_list)):
        result = first + my_list[i]
        sum_list.append(result)
        first = my_list[i]
    return sum_list


def pascal_triangle(n):
    """
    * n: level of deep triangle
    return: list of lists of integers containing the pascal triangle
    """
    if n <= 0:
        return []

    triangle = []
    actual = [1]

    for i in range(n):
        if i == 0:
            triangle.append([1])

        else:
            if i == 1:
                actual.append(1)

            else:
                result = suma(actual)
                result.insert(0, 1)
                result.append(1)
                actual = result

            triangle.append(actual)

    return triangle
