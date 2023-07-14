#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: the first n bytes of s2 to be concatenated
 *
 * Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int size = n, i;
	unsigned int index = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
		size++;
	ptr = malloc(sizeof(char) * (size + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ptr[index++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		ptr[index++] = s2[i];

	ptr[index] = '\0';

	return (ptr);
}
