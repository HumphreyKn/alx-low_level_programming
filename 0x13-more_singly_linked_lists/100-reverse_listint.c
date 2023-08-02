#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the head pointer
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current;

	if (*head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}
	prev = *head;
	current = (*head)->next;

	while (current != NULL)
	{
		(*head)->next = current->next;
		current->next = prev;
		prev = current;
		current = (*head)->next;
	}
	*head = prev;
	return (*head);
}
