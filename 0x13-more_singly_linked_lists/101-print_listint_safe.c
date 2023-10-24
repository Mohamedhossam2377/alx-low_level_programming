#include "lists.h"

/**
 * reallocate - reallaocate memory for array of pointer to nodes in list
 *
 * @old_list: old list
 * @s: size of new list
 * @new_list: new node to be added to list
 *
 * Return: a pointer to new list
 */
const listint_t **reallocate(const listint_t **old_list, size_t s,
		const listint_t *new_list)
{
	const listint_t **new;
	size_t i;

	new = malloc(s * sizeof(listint_t *));
	if (new == NULL)
	{
		free(old_list);
		exit(98);
	}
	for (i = 0; i < s - 1; i++)
		new[i] = old_list[i];
	new[i] = new_list;
	free(old_list);
	return (new);
}

/**
 * print_listint_safe - prints a listint_t linked list
 *
 * @head: first node
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, count = 0;
	const listint_t **li = NULL;

	while (head != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (head == li[i])
			{
			printf("-> [%p] %d\n", (void *)head, head->n);
			free(li);
			return (count);
			}
		}
		count++;
		li = reallocate(li, count, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(li);
	return (count);
}
