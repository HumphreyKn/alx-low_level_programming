#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of two digit numbers
 *
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered as the same combination of the numbers 0
 * and 1
 * You can only use the putchar function (every other function is forbidden)
 * You can only use putchar eight times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j;

	while (i < 100)
	{
		/**
		 * start j from i + 1 to avoid
		 * repeating combinations
		 */
		j = i + 1;

		while (j < 100)
		{
			/* print the first two- digit number */
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			/* print a space between the two */
			putchar(32);
			/* print the last two- digit number */
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			/**
			 * Add a comma and space except for
			 * the last combination
			 */
			if ((i != 98) || (j != 99))
			{
				putchar(',');
				putchar(32);
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
