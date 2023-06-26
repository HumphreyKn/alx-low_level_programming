#include "main.h"

/**
 * _puts - prints a string to the stdout
 * @str: a pointer that accesses the contents of a memory address
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		/* '\0' means null */
		_putchar(str[i]);
	}
	_putchar('\n');
}
