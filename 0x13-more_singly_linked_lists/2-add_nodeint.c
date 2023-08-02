#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a linked list
 * @head: a pointer that points to the memory address of the head node
 * @n: an integer element of a node
 *
 * Return: pointer to the memory address of the head node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = (listint_t *)malloc(sizeof(listint_t));
	if (current == NULL)
	{
		return (NULL);
	}
	current->n = n;
	current->next = *head;
	*head = current;

	return (current);
}
