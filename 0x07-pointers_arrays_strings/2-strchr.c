#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string containing the character
 * @c: the character to be located
 *
 * Return: pointer to the first occurence of c, else NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	else
		return (0);
}
