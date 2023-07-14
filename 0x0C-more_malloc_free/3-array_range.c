#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum value (included)
 * @max: the maximum value (included)
 *
 * Return: pointer to the created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}
	j = (max - min) + 1;
	arr = malloc(sizeof(int) * j);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
