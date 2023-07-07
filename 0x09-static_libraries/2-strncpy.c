#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the pointer to the destination character
 * @src: a pointer that stores the memory address of the source character
 * @n: the number of bytes
 *
 * Return: the pointer pointing to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
