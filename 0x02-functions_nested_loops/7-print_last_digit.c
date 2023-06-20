#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: the digit whose last number is printed
 *
 * Return: the value of the last digit of a number
 */
int print_last_digit(int i)
{
	int j = i % 10;

	if (j < 0)
	{
		j *= -1;
		_putchar(j + '0');
		return (j);
	}
	else
	{
		_putchar(j + '0');
		return (j);
	}
}
