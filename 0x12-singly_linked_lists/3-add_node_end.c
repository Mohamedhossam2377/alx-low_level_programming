#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to head node
 * @str: string
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *added_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (head == NULL || added_node == NULL)
		return (NULL);
	if (str != NULL)
	{
		added_node->str = strdup(str);
		if (added_node->str == NULL)
		{
			free(added_node);
			return (NULL);
		}
		added_node->len = string_len(added_node->str);
	}
	if (node != NULL)
	{
		while (node->next)
			node = node->next;
		node->next = added_node;
	}
	else
		*head = added_node;
	return (added_node);
}
