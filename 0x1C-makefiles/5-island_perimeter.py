#!/usr/bin/python3
""" This is the module for technical
interview on calculating the island perimeter"""


def island_perimeter(grid):
    """ The island perimeter to calculate the
    land perimeter of the island.
    Arg:
        grid - definiiton of the grid of grid.

    Return:
        The perimter of the island grid.
    """

    perimeter = 0
    i_thresh = len(grid) - 1
    for i, single_list in enumerate(grid):
        j_thresh = len(single_list) - 1
        for j, tile in enumerate(single_list):
            if tile == 1:
                p_contribution = 4
                if (j != j_thresh):
                    if (single_list[j + 1]) == 1:
                        p_contribution -= 1
                if (j != 0) and single_list[j - 1] == 1:
                    p_contribution -= 1
                if (i != 0) and grid[i - 1][j] == 1:
                    p_contribution -= 1
                if (i != i_thresh):
                    if grid[i + 1][j] == 1:
                        p_contribution -= 1
                perimeter += p_contribution
    return perimeter
