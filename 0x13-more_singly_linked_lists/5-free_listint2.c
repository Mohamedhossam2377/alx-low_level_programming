#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: first node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *node_check;

	if (head == NULL)
		return;

	node = *head;
	for (; node != NULL;)
	{
		node_check = node;
		node = node->next;
		free(node_check);
	}
	*head = NULL;
}
