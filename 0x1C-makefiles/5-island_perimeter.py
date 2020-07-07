#!/usr/bin/python3
"""
Docstring for Island perimeter
"""


def island_perimeter(grid):
    """
    Docstring for Island perimeter
    """
    p = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] is 1:
                '''Check top and bottom edge'''
                if i is 0 or i == len(grid) - 1:
                    p += 1
                '''Check left and right edge'''
                if j is 0 or j == len(grid[i]) - 1:
                    p += 1
                '''Left out of bounds check'''
                if j is not 0:
                    if grid[i][j - 1] is 0:
                        p += 1
                '''Top out of bounds check'''
                if i is not 0:
                    if grid[i - 1][j] is 0:
                        p += 1
                '''Right out of bounds check'''
                if j != len(grid[i]) - 1:
                    if grid[i][j + 1] is 0:
                        p += 1
                '''Bottom out of bounds check'''
                if i != len(grid) - 1:
                    if grid[i + 1][j] is 0:
                        p += 1

    return p
