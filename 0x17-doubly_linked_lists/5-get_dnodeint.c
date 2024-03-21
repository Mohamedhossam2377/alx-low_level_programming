#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list
 *
 * @head: current head node
 * @index: index of node
 *
 * Return: returns the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
