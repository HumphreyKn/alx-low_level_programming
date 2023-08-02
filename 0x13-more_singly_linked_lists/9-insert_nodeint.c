#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to head pointer
 * @idx: the index of the list where the new node should be added, start:0
 * @n: data(n) of the added node
 *
 * Return: pointer to the added node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *temp;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;

	for (i = 0; i < idx - 1 && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
