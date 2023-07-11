#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer that contains a copy
 * of the given string
 * @str: the string to be copied
 *
 * Return: pointer to the duplicated string, NULL if
 * memory is insufficient
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int j;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	ptr = malloc(i + 1);

	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < i && *(str + j); j++)
	{
		*(ptr + j) = *(str + j);
	}
	while (j < i)
	{
		*(ptr + j) = '\0';
		j++;
	}
	return (ptr);
}
