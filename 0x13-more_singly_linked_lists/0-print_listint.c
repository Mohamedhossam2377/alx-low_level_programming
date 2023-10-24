#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: first node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t sum;

	for (sum = 0; h != NULL; sum++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (sum);
}
