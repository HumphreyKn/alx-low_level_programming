#include "dog.h"
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the function
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
	{
		return (NULL);
	}

	doggy->name = malloc(strlen(name));
	if (doggy->name == NULL)
	{
		return (NULL);
	}

	doggy->owner = malloc(strlen(owner));
	if (doggy->owner == NULL)
	{
		return (NULL);
	}
	strcpy(doggy->name, name);
	doggy->age = age;
	strcpy(doggy->owner, owner);

	return (doggy);
}
