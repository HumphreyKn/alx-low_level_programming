#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the head pointer
 * @index: the index of the node that should deleted, starting at 0
 *
 * Return: Always 1 (Success), else 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *prev;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}
	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	prev = current;
	current = current->next;

	for (i = 1; i < index; i++)
	{
		if (current == NULL)
			return (-1);
		prev = current;
		current = current->next;
	}
	prev->next = current->next;
	free(current);
	return (1);
}
