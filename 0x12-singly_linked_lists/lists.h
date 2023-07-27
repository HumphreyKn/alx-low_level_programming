#ifndef MAIN_H
#define MAIN_H

/**
 * struct elements - singly linked list to store lelements
 * @str: pointer to the string
 * @len: the length of str
 * @next: pointrt to the memory address of the next node
 * Description: this singly linled list creates a node that stores
 * a string and its length
 */

typedef struct elements
{
	char *str;
	unsigned int len;
	struct elements *next;
} list_t;

size_t print_list(const list_t *h);
#endif /* MAIN_H */
