#include "lists.h"

/**
 * string_len - return length of string
 * @st: string
 *
 * Return: length of string
 */
int string_len(char *st)
{
	int i = 0;

	if (st == NULL)
		return (0);

	while (*st++)
		i++;
	return (i);
}
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer of first node
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", string_len(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
