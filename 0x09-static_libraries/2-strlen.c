#include "main.h"

/**
 * _strlen - calculates the length
 * @s: a pointer used to access the memory address of the string passed
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	{
		i++;
	}
	return (i);
}
