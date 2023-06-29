#include "main.h"

/**
 * reverse_array - reverse content of array of integers
 *
 * @a: array of integers
 * @n: numbers of elements
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = (n - 1); i < j; i++, j++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
