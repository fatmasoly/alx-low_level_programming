#!/usr/bin/python3
"""This Module calculates the perimeter of an island"""


def water_around(grid, i, j):
    """Returns the number of water cells"""
    water = 0
    if i <= 0 or not grid[i - 1][j]:
        water += 1
    if j <= 0 or not grid[i][j - 1]:
        water += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        water += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        water += 1
    return water


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perimeter += water_around(grid, i, j)
    return perimeter
