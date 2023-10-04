#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Frees memory allocated for a 2-dimensional grid.
 *
 * @grid: A pointer to the 2D grid to be freed.
 * @height: The number of rows in the grid.
 */
void free_grid(int **grid, int height)
{
int i;
if (grid != NULL)
{
for (i = 0 ; i < height ; i++)
{
free(grid[i]);
}
free(grid);
}
}

