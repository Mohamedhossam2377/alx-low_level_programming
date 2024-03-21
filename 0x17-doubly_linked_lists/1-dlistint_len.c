#include "lists.h"

/**
 * dlistint_len - print number of elements in a linked dlistint_t list
 *
 * @h: head of node
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
