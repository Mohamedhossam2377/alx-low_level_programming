#include "main.h"
#include <stdlib.h>

/**
 * count - count words in string
 *
 * @s: string
 *
 * Return: number
 */
int count(char *s)
{
	int i;
	int n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - splits a string into words
 *
 * @str: string
 *
 * Return: a pointer to an array of strings, or 0 if it fails
 */
char **strtow(char *str)
{
	int i, j, k, l, n = 0, c = 0;
	char **p;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = count(str);
	if (n == 1)
		return (NULL);
	p = (char **)malloc(n * sizeof(char *));
	if (p == NULL)
		return (NULL);
	p[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			p[c] = (char *)malloc(j * sizeof(char));
			j--;
			if (p[c] == NULL)
			{
				for (k = 0; k < c; k++)
					free(p[k]);
				free(p[n - 1]);
				free(p);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				p[c][l] = str[i + l];
			p[c][l] = '\0';
			c++;
			i = i + j;
		}
		else
			i++;
	}
	return (p);
}
