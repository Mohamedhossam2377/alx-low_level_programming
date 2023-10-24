#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the beginning of a listint_t list
 *
 * @head: first node
 * @n: new node value
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *node_check;

	if (head == NULL || new == NULL)
		return (NULL);

	new->next = NULL;
	new->n = n;
	if (*head == NULL)
		*head = new;
	else
	{
		for (node_check = *head; node_check->next;)
			node_check = node_check->next;
		node_check->next = new;
	}
	return (new);
}
