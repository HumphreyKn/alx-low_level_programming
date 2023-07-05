#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: the number to factorize
 *
 * Return: The factor if n>0, -1(Error) if n<0, 1 if n=0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
