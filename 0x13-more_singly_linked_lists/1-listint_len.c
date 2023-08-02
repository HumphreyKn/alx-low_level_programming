#include "lists.h"

/**
 * listint_len - returns the number of elements (nodes) in a linked list
 * @h: pointer to the head of a list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
