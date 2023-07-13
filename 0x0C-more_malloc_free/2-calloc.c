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
	char *pt = s;

	while (num--)
		*s++ = c;

	return (pt);
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
	void *p;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(sizeof(int) * nmemb);

	if (p == 0)
		return (NULL);

	fill_memory(p, 0, sizeof(int) * nmemb);

	return (p);
}
