#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int k;
	int j;

	while (i < 10)
	{
		j = i + 1;

		while (j < 10)
		{
			k = j + 1;

			while (k < 10)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if ((i != 7) || (j != 8) || (k != 9))
				{
					putchar(',');
					putchar(32);

				}
				k++;
			}
			j++;
		}
		i++;
	}

	putchar('\n');
	return (0);
}
