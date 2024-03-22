#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts new node at given position
 *
 * @h: current head node
 * @idx: the index of the list where the new node should be added
 * @n: new node integer
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *t = *h, *n_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		t = t->next;
		if (t == NULL)
			return (NULL);
	}

	if (t->next == NULL)
		return (add_dnodeint_end(h, n));

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->prev = t;
	n_node->next = t->next;
	t->next->prev = n_node;
	t->next = n_node;

	return (n_node);
}
