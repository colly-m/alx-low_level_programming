#!/usr/bin/python3
"""Module to return perimeter of an island"""


def island_perimeter(grid):
    """
    Calculate the perimeter of parameter described in the grid
    Args:
    grid(list of integers): Represents island 0 for water and 1 for land
    Return:
        int: perimeter of the island
    """
    wid = len(grid[0])
    ht = len(grid)
    ejs = 0
    sz = 0

    for h in range(ht):
        for w in range(wid):
            if grid[h][w] == 1:
                sz += 1
                if (w > 0 and grid[h][w - 1] == 1):
                    ejs += 1
                if (h > 0 and grid[h - 1][w] == 1):
                    ejs += 1
    return (sz * 4 - ejs * 2)
