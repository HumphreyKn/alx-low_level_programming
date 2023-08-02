#include "lists.h"

/**
 * get_nodeint_at - returns the nth node of a linked list
 * @head: head of the linked list
 * index: the index of the node to return
 *
 * Return: node at the index'th index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;

	node = head;

	while (node != NULL && i != index)
	{
		i++;
		node = node->next;
	}
	if (i == index)
	{
		return (node);
	}
	
	return (NULL);
}
