#include "main.h"

/**
 * puts2 - prints every other character of a string startin with the first
 * @str: The pointer to the string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int l = 0;
	int m = 0;
	char *n = str;
	int i;

	while (*n != '\0')
	{
		n++;
		l++;
	}
	m = l - 1;

	for (i = 0; i <= m; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
