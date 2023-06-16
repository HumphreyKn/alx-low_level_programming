#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all lowercase alphabets except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alph = 'a';
	/* while loop for all alphabets */
	while (alph <= 'z')
	{
		if ((alph == 'e') || (alph == 'q'))
		{
			alph++;
			continue;
		}
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
