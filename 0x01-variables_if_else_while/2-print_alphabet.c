#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the alphabet characters in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabet = 'a';
	/* loop through the alphabets */
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
