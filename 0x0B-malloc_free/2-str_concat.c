#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the newly allocated memory, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i;
	int len = 0;
	int index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		ptr[index++] = s1[i];
	for (i = 0; s2[i]; i++)
		ptr[index++] = s2[i];
	return (ptr);
}
