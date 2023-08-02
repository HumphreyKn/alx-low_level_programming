#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: the head of the linked list
 *
 * Return:  the head node’s data (n), 0 if head is NULL
 */
int pop_listint(listint_t **head)
{
	listint_t *head_node;
	int n;

	head_node = *head;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	(*head) = (*head)->next;
	free(head_node);

	return (n);
}
