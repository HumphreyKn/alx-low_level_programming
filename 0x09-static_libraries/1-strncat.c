#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to the memory address of the destination string
 * @src: pointer to the memory address of the source string
 * @n: least number of bytes for src not to be null terminated
 *
 * Return: memory address to the concatenated destination file
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
