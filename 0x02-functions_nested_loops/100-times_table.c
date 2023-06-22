#include "main.h"

/**
 * print_times_table - prints the n times tamle starting with 0
 * @n: a number that reoresents the number of multiplication times
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, prod;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(44);
				_putchar(32);

				prod = i * j;

				if (prod < 100)
					_putchar(32);

				if (prod < 10)
					_putchar(32);

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10) % 10) + '0');
				}
				else if (prod > 9 && prod < 100)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
