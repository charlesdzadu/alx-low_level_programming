#!/usr/bin/python3
"""Defines an island perimeter"""


def island_perimeter(grid):
    """Return the perimiter of an island.

    The grid of water by 0 and land by 1 .

    Args:
        grid (list): A list of list of integers.
    Returns:
        The perimeter
    """
    w = len(grid[0])
    h = len(grid)
    edges = 0
    size = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
