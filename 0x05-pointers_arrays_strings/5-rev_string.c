#include "main.h"


/**
 * rev_string - reverse a string
 *
 * @s: string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int l, i;
	char tmp;

	while (s(l))
	{
		l++;
	}

	for (i = 0; i < l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = tmp;
	}
}
