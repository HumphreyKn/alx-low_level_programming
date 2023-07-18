# C- Structures, typedef

## Learning Objectives

### General
	- What are structures, when and how to use them
	- How to use `typedef`
## Tasks
### Task 0
Define a new type struct dog with the following elements:
	- `name`, type = `char *`
	- `age`, type = `float`
	- `owner`, type = `char *`

**main.c**
```
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

### Task 1
Write a function that initialize a variable of type struct dog
	- Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

**main.c**

```
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

### Task 2
Write a function that prints a struct dog
	- Prototype: `void print_dog(struct dog *d);`
	- Format: see example below
	- You are allowed to use the standard library
	- If an element of `d` is `NULL`, print `(nil)` instead of this element. (if name is `NULL`, print Name: (`nil`))
	- If `d` is `NULL` print nothing.

**main.c**

```
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
```
### Task 3
Define a new type `dog_t` as a new name for the type `struct dog`.

__main.c__

```
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

### Task 4
Write a function that creates a new dog.
	- Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
	- You have to store a copy of `name` and `owner`
	- Return `NULL` if the function fails

**main.c**

```
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
```
### Task 5
Write a function that frees dogs.
	- Prototype: `void free_dog(dog_t *d);`

**main.c**

```
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}
```

After compilation, I stored the executable files in `*.exe`, and ignored their commit in a `.gitignore` file.
