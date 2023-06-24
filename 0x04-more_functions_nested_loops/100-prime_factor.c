#include <stdio.h>

/**
 * prime_factors - Declaration of function
 * Description: find and print the largest prime factor of a number
 * @num: number to be tested
 * Return: void
 */
void prime_factors(long int num);

/**
 * main - Entry point
 * Description: Calls the function prime_factors
 *
 * Return: Always 0
 */

int main(void)
{
	prime_factors(612852475143);
	return (0);
}

/**
 * prime_factors - function definition
 * @num: number to be tested
 *
 * Description: finds the largest prime factor of a number
 *
 * Return: void
 */

void prime_factors(long int num)
{
	long prime = 2;

	while (prime != num)
	{
		if (num % prime == 0)
		{
			num /= prime;
		}
		else
			prime++;
	}
	printf("%ld\n", num);
}
