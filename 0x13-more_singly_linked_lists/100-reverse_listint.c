#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head: first node
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next_node = NULL;

	if (head == 0 || *head == 0)
		return (NULL);

	node = *head;
	*head = NULL;
	while (node)
	{
		next_node = node->next;
		node->next = *head;
		*head = node;
		node = next_node;
	}
	return (*head);
}
