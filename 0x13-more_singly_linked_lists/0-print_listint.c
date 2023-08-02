#include "lists.h"

/**
 * print_listint - prints all the elements of a `listint_t` list
 * @h: pointer to the head of the node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
