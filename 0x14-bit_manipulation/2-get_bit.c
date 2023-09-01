#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the integer to convert
 * @index: index to be returned
 *
 * Return: the value of the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	i = (n & (1 << index)) ? 1 : 0;

	return (i);
}
