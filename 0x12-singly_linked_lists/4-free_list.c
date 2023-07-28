#include "lists.h"

/**
 * free_list - frees a `list_t` list
 * @head: the head of the linked list
 *
 * Retutn: nothing
 */
void free_list(list_t *head)
{
	list_t *node1;

	while (head != NULL)
	{
		node1 = head;
		head = head->next;
		free(node1->str);
		free(node1);
	}
}
