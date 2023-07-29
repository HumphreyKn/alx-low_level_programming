#include "lists.h"

/**
 * add_node - adds a node at the beginning of a node
 * @head: the memory address of the first node
 * @str: the string element to be added in a node
 * Description: str needs to be duplicated
 *
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL || head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
