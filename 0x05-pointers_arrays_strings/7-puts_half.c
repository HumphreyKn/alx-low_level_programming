#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to the string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		/* does nothing */
	}
	if (i % 2 == 1)
	{
		j = (i - 1) / 2;
		j += 1;
	}
	else
	{
		j = i / 2;
	}
	for (; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
