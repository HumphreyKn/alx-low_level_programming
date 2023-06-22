#include "main.h"

/**
 * positive_or_negative - check whether the number stored in the variable i is
 * positive or negative
 * @i: the integer to be tested
 *
 * Return: void
 */
void positive_or_negative(int i)
{


	/**
	 * using if- else to check for positivity
	 */
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}

}
