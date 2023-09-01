#include "main.h"

/**
 * print_binary - converts decimal to binary representation
 * @n: the decimal nimber to be converted
 * Description: You are not allowed to use arrays, malloc,
 * and the %, / operators
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	/* if n is 0, binary is also 0 */
	if ((n >> 1) == 0 && n == 0)
	{
		_putchar ('0');
		return;
	}
	/* does n still have binary digits? */
	if ((n >> 1) != 0)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
