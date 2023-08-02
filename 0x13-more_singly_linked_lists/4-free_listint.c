#include "lists.h"

/**
 * free_listint - frees a linked list `listint_t`
 * @head: head of the list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
