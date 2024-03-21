#include "lists.h"

/**
 * add_dnodeint_end - add new head node at the end
 *
 * @head: current head node
 * @n: new node field
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *node;

	if (!head || !new_node)
		return (new_node ? free(new_node), NULL : NULL);

	new_node->n = n;
	new_node->prev = NULL;
	if (!*head)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		node = *head;
		while (node->next)
			node = node->next;

		node->next = new_node;
		new_node->prev = node;
	}
	return (new_node);
}
