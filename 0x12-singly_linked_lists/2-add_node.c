#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to head node
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *added_head = malloc(sizeof(list_t));

	if (head == NULL || added_head == NULL)
		return (NULL);

	if (str != NULL)
	{
		added_head->str = strdup(str);
		if (added_head->str == NULL)
		{
			free(added_head);
			return (NULL);
		}
		added_head->len = string_len(added_head->str);
	}
	added_head->next = *head;
	*head = added_head;
	return (added_head);
}
