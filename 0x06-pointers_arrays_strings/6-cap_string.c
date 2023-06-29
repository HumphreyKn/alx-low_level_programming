#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: memory address of the first character of the string
 *
 * Return: memory address of the converted string str
 */
char *cap_string(char *str)
{
	char a[] = " \t\n,;.!?\"(){}";
	int j, i = 0;

	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (i == 0)
				*(str + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(str + i - 1))
						*(str + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (str);
}
