#include "main.h"

/**
 * divisible - checks the divisibility of a number
 * @num: number to test
 * @divisor: the divisor to use
 *
 * Return: 0 if divisible, 1 if not
 */
int divisible(int num, int divisor)
{
	if (num % divisor == 0)
	{
		return (0);
	}
	else if (divisor == num / 2)
	{
		return (1);
	}
	else
	{
		return (divisible(num, divisor + 1));
	}
}

/**
 * is_prime_number - checks whether an integer is a prime number
 * @n: the number to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2 || n == 3)
	{
		return (1);
	}
	else
	{
		return (divisible(n, divisor));
	}
}
