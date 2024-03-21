#include "lists.h"

/**
 * free_dlistint - frees a list
 *
 * @head: current head node
 *
 * Return: Null
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
