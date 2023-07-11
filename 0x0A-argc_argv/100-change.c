#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins to make change for an
 * amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if argc == 2, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins[5] = {25, 10, 5, 2, 1};
	int total_coins = 0;
	int i, num_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", total_coins);
		return (0);
	}
	cents = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		num_coins = cents / coins[i];
		total_coins += num_coins;
		cents -= num_coins * coins[i];
	}
	printf("%d\n", total_coins);
	return (0);
}
