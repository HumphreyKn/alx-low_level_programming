#include "main.h"

/**
 * check_palindrome - checks if a string is a palindrome
 * @str: pointer to address of the string to be checked
 * @len: the length of the string
 * @i: incrementor that starts at 0
 *
 * Return: 1 if string is palindrome, 0 otherwise
 */
int check_palindrome(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
	{
		return (check_palindrome(str, len - 1, i + 1));
	}
	if (str[i] != str[len])
	{
		return (0);
	}
	return (1);
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: a pointer to the address of the pointer to check
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to the address to the string to be checked
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int i = 0;
	int strlen = _strlen_recursion(s) - 1;

	return (check_palindrome(s, strlen, i));
}
