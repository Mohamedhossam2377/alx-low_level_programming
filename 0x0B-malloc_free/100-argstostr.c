#include "main.h"
#include <stdlib.h>

/**
 * slength - get length fot the string
 *
 * @s: string
 *
 * Return: length
 */
int slength(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: argument count
 * @av: argument value
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int c1 = 0, c2 = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, c1++)
		c1 = c1 + slength(av[i]);

	p = malloc(sizeof(char) * c1 + 1);
	if (p == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, c2++)
			p[c2] = av[i][j];

		p[c2] = '\n';
		c2++;
	}
	p[c2] = '\0';
	return (p);
}
