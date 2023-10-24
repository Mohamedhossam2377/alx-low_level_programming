#include "lists.h"

/**
 * find_listint_loop - find a loop in list
 *
 * @head: first node
 *
 * Return: address of node where loop starts, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
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
