#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory
 * @d: pointer to the struct to be freed
 *
 * Return: void(nothing)
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
