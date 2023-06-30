#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: The memory address to the string to be encoded
 * Description:
 * if statement is only used once
 * the code has only two loops
 * switch and tenary operator is not allowed
 *
 * Return: memory address to the encoded string str
 */
char *rot13(char *str)
{
	char *ptr = str;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, n = sizeof(in) - 1;

	while (*ptr != '\0')
	{
		for (i = 0; i < n; i++)
		{
			if (*ptr == in[i])
			{
				*ptr = out[i];
				break;
			}
		}
		ptr++;
	}
	return (str);
}
