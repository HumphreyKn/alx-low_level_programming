#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: address to the memory to be filled
 * @b: constant byte that will be used to fill the memory
 * @n: the number of bytes to be filled by the constant byte
 *
 * Return: a pointer to the memory address s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
