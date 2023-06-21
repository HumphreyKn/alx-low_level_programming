#include "main.h"

/**
 * add_multiples - add multiples of 3 or 5 below a number n
 * @n: the max number to be considered (excluded)
 *
 * Return: sum of multiples of 3 or 5 between 0 and n
 */
int add_multiples(int n)
{
	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	return (sum);
}
