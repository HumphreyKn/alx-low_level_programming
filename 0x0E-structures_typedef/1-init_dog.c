#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: a pointer to the memory address of the dog structure
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the memory address of the dog's owner
 *
 * Return: nothing(void)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
