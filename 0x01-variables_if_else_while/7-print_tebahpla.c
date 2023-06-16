#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the lowercase alphbets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
