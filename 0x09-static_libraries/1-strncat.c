#include "main.h"

/**
 * _strncat - concatenates two strings
 * and it will use at most n bytes from src.
 *
 * @dest: first string
 * @src: second string
 * @n: the most number bytes from src
 *
 * Return: pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i])
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}
