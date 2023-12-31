#include "lists.h"

/**
 * list_len - counts the number of lements in list
 * @h: the head of the linked list
 *
 * Return: number of elements in the linked list_t list
 */

size_t list_len(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
