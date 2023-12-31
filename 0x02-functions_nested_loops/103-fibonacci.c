#include <stdio.h>

/**
 * main - prints the sum of even fibonacci terms
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long count, i, j, k, sum;

	i = 0;
	sum = 0;
	j = 1;

	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;

		if (k % 2 == 0 && k < 4000000)
			sum += k;
	}
	printf("%lu\n", sum);
	return (0);
}
