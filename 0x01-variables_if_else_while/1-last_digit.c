#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printing the last digit of a number stored in the variable n
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* storing last digit in the  variable last_digit */
	last_digit = n % 10;

	/* Check the condition and print output */
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is %d\n", n, last_digit, last_digit);
	}
	else if ((last_digit < 6) && (last_digit != 0))
	{
		printf("Last digit of %d is %d and is ", n, last_digit);
		printf("less than 6 and not 0\n");
	}

	return (0);
}
