#!/usr/bin/python3
"""
5-island_perimeter module
"""


def island_perimeter(grid):
    """
    grid: is a list of list of integer
           0 represents a water zone
           1 represent a land zone
           one cell is a square with side length 1
           grid cells a connected horizontally/vertically
           grid is rectangular, width and height don't exceed 100
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter
