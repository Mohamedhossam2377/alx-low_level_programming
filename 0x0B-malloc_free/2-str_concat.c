#include "main.h"
#include <stdlib.h>

/**
 * slength - to get length of string
 *
 * @s: string
 *
 * Return: lenght
 */
int slength(char *s)
{
	int len;
	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: null
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *p;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	len1 = slength(s1);
	len2 = slength(s2);
	p = malloc((len1 + len2) *sizeof(char) + 1);
	if (p == 0)
		return (0);

	for (i = 0; i <= len1 + len2; i++)
	{
		if (i < len1)
			p[i] = s1[i];
		else
			p[i] = s2[i - len1];
	}
	p[i] = '\0';
	return (p);
}
