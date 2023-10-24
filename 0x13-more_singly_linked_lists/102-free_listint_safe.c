#include "lists.h"

/**
 * find_loop - find a loop in list
 *
 * @head: first node
 *
 * Return: ddress of node where loop starts, NULL if no loop
 */
listint_t *find_loop(listint_t *head)
{
	listint_t *po, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (po = head; po != end; po = po->next)
			if (po == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - frees a listint_t list
 *
 * @h: first node
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next_node, *loop_node;
	size_t len;
	int l = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loop_node = find_loop(*h);
	for (len = 0; (*h != loop_node || l) && *h != NULL; *h = next_node)
	{
		len++;
		next_node = (*h)->next;
		if (*h == loop_node && l)
		{
			if (loop_node == loop_node->next)
			{
				free(*h);
				break;
			}
			len++;
			next_node = next_node->next;
			free((*h)->next);
			l = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
