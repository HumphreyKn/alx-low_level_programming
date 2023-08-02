#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: pointer to a pointer to the head of the node
 * @n: an integer
 *
 * Return: pointer to the added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_node;

	current_node = *head;

	while (current_node != NULL && current_node->next != NULL)
		current_node = current_node->next;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (current_node != NULL)
	{
		current_node->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	return (new_node);
}
