#include "lists.h"

/**
 * delete_nodeint_at_index - inserts a new node at a given position
 *
 * @head: first node
 * @index: index of deleted node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *p_node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			p_node->next = node->next;
			free(node);
			return (1);
		}
		i++;
		p_node = node;
		node = node->next;
	}
	return (-1);
}
