#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints my name
 * @name: name to be printed
 * @f: pointer to the function that will print my name
 *
 * Return: void(nothing)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
	else
	{
		return;
	}
}
