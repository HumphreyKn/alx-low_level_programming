#include "main.h"

/**
 * string_toupper - changes all lowercase letters to string uppercase
 * @str: string containing the characters to be converted
 *
 * Return: memory address to the first character of the string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}
	return (str);
}
