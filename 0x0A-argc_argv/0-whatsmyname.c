#include <stdio.h>
/**
 * main - a program that prints its name
 * @argc: argument count
 * @argv: argument vector: 1D array of strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argc; /* indicates that it is intentionally unused */

	printf("%s\n", argv[0]);
	return (0);
}
