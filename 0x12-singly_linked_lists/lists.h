#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif /* MAIN_H */
