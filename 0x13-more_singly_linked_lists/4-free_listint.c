#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: first node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	for (; head != NULL;)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
