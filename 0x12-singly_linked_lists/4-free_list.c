#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer of head node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node, *next_node;

	if (head == NULL)
		return (NULL);

	node = head;
	while (node != NULL)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}
}
