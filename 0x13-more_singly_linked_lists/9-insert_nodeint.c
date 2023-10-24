include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: first node
 * @idx: the index of the list where the new node should be added
 * @n: new node value
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (head == NULL || new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	node = *head;
	while (node != NULL)
	{
		if (i == idx - 1)
		{
			new->next = node->next;
			node->next = new;
			return (new);
		}
		i++;
		node = node->next;
	}
	free(new);
	return (NULL);
}
