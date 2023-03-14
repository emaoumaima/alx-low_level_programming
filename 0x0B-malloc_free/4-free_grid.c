#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: multidimensional array of integers.
 * @height: height of the grid.
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
