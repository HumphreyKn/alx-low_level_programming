#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2D array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: pointer to a 2D array, NULL otherwise
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int row;
	int col;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);
		if (grid[row] == NULL)
		{
			for (col = 0; col < row; col++)
			{
				free(grid[col]);
			}
			free(grid);
			return (NULL);
		}
		for (col = 0; col < width; col++)
		{
			grid[row][col] = 0;
		}
	}
	return (grid);
}
