#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes with a specific char
 * @size: the size of the array
 * @c: the specific character to be initialized
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
