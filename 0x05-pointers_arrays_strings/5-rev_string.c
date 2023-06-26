#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0; /*the length*/
	char temp;

	while (s[i++])
		j++;
	for (i = j - 1; i >= j / 2; i--)
	{
		temp = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = temp;
	}
}
