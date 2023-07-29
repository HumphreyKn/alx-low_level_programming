#include "lists.h"

/**
 * add_node_end - adds a node at the end of a node
 * @head: the memory address of the first node
 * @str: the string element to be added in a node
 * Description: str needs to be duplicated
 *
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *cur_node;

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
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	cur_node = *head;

	while (cur_node->next != NULL)
	{
		cur_node = cur_node->next;
	}
	cur_node->next = new_node;
	return (new_node);
}
