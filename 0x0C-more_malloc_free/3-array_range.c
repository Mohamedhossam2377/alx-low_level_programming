#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * array_range - creates an array of integers
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *r;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	r = malloc(sizeof(int) * size);

	if (r == NULL)
		return (NULL);

	for (i = 0; min <= max, i++)
		r[i] = min++;

	return (r);
}
