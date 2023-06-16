#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabets in lowercase then uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alph = 'a';
	int ALPH = 'A';
	/* while loop for lowercase */
	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}

	/* while loop for UPPERCASE */
	while (ALPH <= 'Z')
	{
		putchar(ALPH);
		ALPH++;
	}

	/* followed by a new line */
	putchar('\n');

	return (0);
}
