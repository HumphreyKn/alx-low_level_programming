#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the `struct dog`
 * @d: pointer to the memory address of the struct
 * Description: It prints the element
 * - if element of d is NULL, print nil
 *   if d is NULL print nothing
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}

}
