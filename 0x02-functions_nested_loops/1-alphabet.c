#include "main.h"

/**
 * print_alphabet - prints alphabets in lower case
 *
 * Return: void
 */

void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
