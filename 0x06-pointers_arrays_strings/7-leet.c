#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: memory address of the string to be encoded
 *
 * Description:
 * - Letters a and A should be replaced by 4
 * - Letters e and E should be replaced by 3
 * - Letters o and O should be replaced by 0
 * - Letters t and T should be replaced by 7
 * - Letters l and L should be replaced by 1
 *
 * Return: memory address that contained the encoded string
 */
char *leet(char *str)
{
	char *ptr = str;
	/*An array for the letters to be replaced*/
	char l[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	/* An array for numbers to be encoded */
	char n[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i;

	while (*ptr != '\0')
	{
		for (i = 0; i <= 9; i++)
		{
			if (*ptr == l[i])
			{
				*ptr = n[i];
				break;
			}
		}
		ptr++;
	}
	return (str);
}
