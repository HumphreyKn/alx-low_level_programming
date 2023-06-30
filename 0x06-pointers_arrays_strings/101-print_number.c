#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Description: You know what? The function keeps callinf itself
 * until the condition is met
 *
 * Return: nothing(void)
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
