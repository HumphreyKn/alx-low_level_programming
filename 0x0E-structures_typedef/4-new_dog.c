#include "dog.h"
#include <string.h>

/**
 * _strlen - calculates the length
 * @s: a pointer used to access the memory address of the string passed
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	{
		i++;
	}
	return (i);
}

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

	doggy->name = malloc(_strlen(name));
	if (doggy->name == NULL)
	{
		free(doggy);
		free(doggy->name);
		return (NULL);
	}

	doggy->owner = malloc(_strlen(owner));
	if (doggy->owner == NULL)
	{
		free(doggy);
		free(doggy->owner);
		return (NULL);
	}
	_strcpy(doggy->name, name);
	doggy->age = age;
	_strcpy(doggy->owner, owner);

	return (doggy);
}
