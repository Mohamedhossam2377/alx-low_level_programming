#include "lists.h"

/**
 * num_elements - number of elements in a linked list_t list
 * @h: pointer of first node
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
