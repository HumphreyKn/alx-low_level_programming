#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to head pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *list_ptr;

	while (*head != NULL)
	{
		list_ptr = *head;
		*head = (*head)->next;
		free(list_ptr);
	}
}
