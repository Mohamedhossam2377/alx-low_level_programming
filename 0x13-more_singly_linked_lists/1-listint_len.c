#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t list
 *
 * @h: first node
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t sum;

	for (sum = 0; h != NULL; sum++)
	{
		h = h->next;
	}
	return (sum);
}
