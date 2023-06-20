#include "main.h"

/**
 * _islower - checks whether the character is lowercase
 * @c: Represents the character input to be checked
 *
 * Return: 1 for lowercase character, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
