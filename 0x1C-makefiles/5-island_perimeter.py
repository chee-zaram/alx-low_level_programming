#!/usr/bin/python3
"""
This is the module `5-island_perimeter`
"""


def _validator(grid):
    """
    Runs checks on `grid` to validate the types and values

    Args:
        grid (list): A list of lists of integers
    """

    # check that grid is a list
    if type(grid) != list:
        raise TypeError("'grid' must be a list")

    # check that all rows in grid are list
    if not all(type(row) == list for row in grid):
        raise TypeError("'grid' has to be made up of lists")

    # check that all cells in the rows are integers 0 or 1
    if not all(type(cell) == int and cell in (0, 1)
               for row in grid for cell in row):
        raise TypeError("each item in a row must be an integer 0 or 1")

    # check that the height of the grid is not more than 100
    if len(grid) > 100:
        raise ValueError("The height of 'grid' cannot be greater than 100")

    # check that each row in the grid is less than 100 and are all equal
    row_0_len = len(grid[0])
    if row_0_len > 100:
        raise ValueError("Each row must be less than 100")
    if not all(row_0_len == len(row) for row in grid):
        raise ValueError("All rows in the grid must be of equal length")

    # check that the grid is a rectangle
    if row_0_len == len(grid):
        raise ValueError("'grid' must be rectangular")


def island_perimeter(grid):
    """
    This function takes in a list of lists of integers which specify an island

    Water regions are specified by 0 and island perimeter by 1
    One cell is square with side length 1
    `grid` cells are connected horizontally or vertically, not diagonally
    `grid` is rectangular. Width and height do not exceed 100
    There is only one island
    There are no lakes in the island

    Args:
        grid (list): A list of lists of integers either 0 or 1

    Returns:
        The perimeter of the island
    """

    if not grid:
        return 0

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
