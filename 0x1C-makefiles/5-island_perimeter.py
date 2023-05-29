#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""

def island_perimeter(grid):
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])
    
    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4  # Start with a base perimeter of 4 for each land cell
                
                # Check the adjacent cells
                if row > 0 and grid[row-1][col] == 1:
                    perimeter -= 1  # Deduct 1 from the perimeter for each shared side
                if row < rows-1 and grid[row+1][col] == 1:
                    perimeter -= 1
                if col > 0 and grid[row][col-1] == 1:
                    perimeter -= 1
                if col < cols-1 and grid[row][col+1] == 1:
                    perimeter -= 1

    return perimeter
