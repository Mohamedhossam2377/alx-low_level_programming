#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: first node
 *
 * Return: the head node’s data (n), if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int head_value;

	if (head == NULL || *head == NULL)
		return (0);

	node = (*head)->next;
	head_value = (*head)->n;
	free(*head);
	*head = node;
	return (head_value);
}
