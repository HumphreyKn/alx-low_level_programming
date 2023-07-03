#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: memory address to the string with the substring
 * @needle: memory address to the substring to check
 *
 * Return: a pointer to the beginning of the located substring,
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *hay = haystack;
		char *ndl = needle;

		while (*hay == *ndl && *ndl != '\0')
		{
			hay++;
			ndl++;
		}
		if (*ndl == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
