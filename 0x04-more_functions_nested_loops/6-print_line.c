#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times to print the character "_"
 *
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
