#include "lists.h"

/**
 * sum_listint - sums all data(n) and returns the sum
 * @head: head of the linked list
 *
 * Return: the sum of data(n) of all nodes, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	node = head;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
