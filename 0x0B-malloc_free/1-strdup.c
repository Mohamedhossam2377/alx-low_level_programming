#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates an array of chars
 *
 * @str: string
 *
 * Return: pointer to the duplicated string,or null if fails
 */
char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	p = malloc(size * sizeof(*str) + 1);

	if (p == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			p[i] = str[i];
	}
	return (p);
}
