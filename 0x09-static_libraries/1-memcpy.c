#include "main.h"

/**
 * _memcpy - copies the memory address
 * @dest: pointer to the destination memory address
 * @src: pointer to the source memory address
 * @n: number of bytes to be copied
 *
 * Return: pointer to the destination memory address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
