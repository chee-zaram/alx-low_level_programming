#!/usr/bin/python3
"""
This is the module `5-island_perimeter`
"""


def _validator(grid):
    """
    Runs checks on `grid` to validate the types

    Args:
        grid (list): A list of lists of integers
    """

    if type(grid) != list:
        raise TypeError("'grid' must be a list")

    if not all(type(row) == list for row in grid):
        raise TypeError("'grid' has to be made up of lists")

    if not all(type(cell) == int for row in grid for cell in row):
        raise TypeError("each item in a row must be an integer")


def island_perimeter(grid):
    """
    This function takes in a list of lists of integers which specify an island

    Water regions are specified by 0 and island perimeter by 1
    One cell is square with side length 1
    Grid cells are connected horizontally or vertically, not diagonally
    Grid is rectangular. Width and height do not exceed 100
    There is only one island
    There are no lakes in the island

    Args:
        grid (list): A list of lists of integers either 0 or 1

    Returns:
        The perimeter of the island
    """

    _validator(grid)
    perimeter = 0

    for i, row in enumerate(grid):
        for j, cell in enumerate(row):
            if cell != 1:
                continue

            # a square has 4 sides, so perimeter is plus 4 for now
            perimeter += 4

            # if the cell shares border with another cell above it, then we
            # minus for that shared border
            if i > 0 and grid[i-1][j] == 1:
                perimeter -= 2

            # if the cell shares border with another cell before it on the row
            # then we minus for that shared border
            if j > 0 and row[j-1] == 1:
                perimeter -= 2

    return perimeter
