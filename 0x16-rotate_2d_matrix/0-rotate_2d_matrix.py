#!/usr/bin/python3
"""
rotate a matrix
"""


def rotate_2d_m(matrix):
    """
    method to rotate matrix -> list of lists
    """
    matrix_tmp = [list(elem) for elem in matrix]
    matrix_tmp.reverse()
    for i in range(len(matrix_tmp)):
        for j in range(len(matrix_tmp[i])):
            matrix[i][j] = matrix_tmp[j][i]
