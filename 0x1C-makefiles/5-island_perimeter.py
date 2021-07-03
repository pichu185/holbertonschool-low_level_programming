#!/usr/bin/python3
"""Create a function def island_perimeter(grid): that returns the perimeter of
   the island described in grid:
     Grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height t exceed 100
     Grid is completely surrounded by water, and there is one island
     The island doesnt have lakes
"""

def island_perimeter(grid):
    """function that returns the perimeter of the island described in grid"""

    perimeter = 0
    for width in range(len(grid)):
        for height in range(len(grid([0])):
            if grid[width][height] == 1:

                if width <= 0:
                    perimeter += 1
                elif grid[width - 1][height] != 1:
                    perimeter += 1

                if height <= 0:
                    perimeter += 1
                            elif grid[width][height - 1] != 1:
                    perimeter += 1

                if width >= (len(grid) - 1):
                    perimeter += 1
                            elif grid[width + 1][height] != 1:
                    perimeter += 1

                if height >= (len(grid[0]) - 1):
                    perimeter += 1
                elif grid[width][height + 1] != 1:
                    perimeter += 1
    return perimeter
