#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
        grid (List[List[int]]): A list of lists of integers representing the island.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                perimeter += 4

                if col < len(grid[0]) - 1 and grid[row][col + 1] == 1:
                    perimeter -= 2
                if row < len(grid) - 1 and grid[row + 1][col] == 1:
                    perimeter -= 2

    return perimeter

