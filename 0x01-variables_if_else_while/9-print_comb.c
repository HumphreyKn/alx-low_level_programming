#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of single- digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
