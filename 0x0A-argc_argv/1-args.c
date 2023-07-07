#include <stdio.h>

/**
 * main - prints the number of argumentspassed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0(Success)
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
