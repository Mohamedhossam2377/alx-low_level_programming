#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * fill_memory - fill memory with constant
 *
 * @s: pointer
 * @c: constant
 * @num: max bytes to use
 *
 * Return: s
 */
char *fill_memory(char *s, char c, unsigned int num)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = c;
	}

	return (s);
}
/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: memory for an array
 * @size: size of element
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	fill_memory(p, 0, size * nmemb);

	return (p);
}
