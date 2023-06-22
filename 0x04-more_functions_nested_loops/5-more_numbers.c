#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 1 t0 14
 * Return: void
 */
void more_numbers(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		int j;

		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
