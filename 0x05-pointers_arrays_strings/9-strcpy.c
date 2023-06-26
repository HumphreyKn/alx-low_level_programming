#include "main.h"

/**
 * _strcpy - copies strings to pointers including the terminating null byte \0
 * @dest: the pointed string
 * @src: the source
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *pt = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (pt);
}
