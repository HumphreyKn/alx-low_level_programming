#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: memory address to the destination variable
 * @src: memory address to the source variable
 *
 * Return: a pointer to the dest variable containing the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *str = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (str);
}
