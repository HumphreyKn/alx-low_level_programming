#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to search the integer into
 * @size: the size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: returns the index of the first element for which
 * the cmp function does not return 0, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || size < 0 || cmp == NULL)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}
