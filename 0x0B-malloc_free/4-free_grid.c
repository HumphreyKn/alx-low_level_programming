#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2D array grid
 * @grid: pointer to the memory address of the grid to be freed
 * @height: height of the grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
