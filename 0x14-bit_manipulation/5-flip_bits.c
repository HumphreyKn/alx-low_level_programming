#include "main.h"

/**
 * flip_bits - flips from one number to another
 * @n: contains the bits to be flipped
 * @m: we are flipping to this variable
 *
 * Return: number of bits  needed to flip from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip, i = 0;

	flip = n ^ m;

	for (i = 0; flip != 0; i += 1)
		flip &= (flip - 1);
	return (i);
}
