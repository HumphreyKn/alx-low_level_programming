#include "main.h"

/**
 * print_alphabet_x10 - printa 10 times the alphabets in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 1;
	int j;

	while (i <= 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
