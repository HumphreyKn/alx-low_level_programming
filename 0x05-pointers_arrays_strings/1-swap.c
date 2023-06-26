#include "main.h"

/**
 * swap_int - swaps the values of two inters
 * @a: a pointer to store the first swapped integer
 * @b: a pointer to store the second swapped integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
