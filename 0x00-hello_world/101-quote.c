#include <stdio.h>
#include <unistd.h>

/**
 * main - prints and that piece of art is useful" - Dora Korpar, 2015-10-19,
 * followed by a new line, to the standard error.
 * Not allowed to use `man any functions listed in the NAME section of the
 * man (3) printf or man (3) puts
 * Return: Always 1 if success
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
