#include <stdio.h>

/**
 * main - finds and print the first 98 fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long i, j, k;
	unsigned long m, n, p, carr;

	i = 0;
	j = 1;

	for (count = 1; count < 92; count++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu, ", k);
	}
	m = i % 1000;
	i = i / 1000;
	n = j % 1000;
	j = j / 1000;

	for (count = 0; count < 99; count++)
	{
		carr = (m + n) / 1000;
		p = (m + n) - carr * 1000;
		k = (i + j) + carr;
		m = n;
		n = p;
		i = j;
		j = k;

		if (p > 100)
			printf("%lu%lu", k, p);
		else
			printf("%lu0%lu", k, p);
		if (count != 98)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
