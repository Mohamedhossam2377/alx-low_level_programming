#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 *
 * @head: first node
 *
 * Return: returns the sum of all the data (n), if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head != NULL;)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
