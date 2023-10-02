#include "main.h"

/**
 * _strcmp - compare two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: return 1 if true and 0 if false.
 */
int _strcmp(char *s1, char *s2)
{
	int same = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			same = ((int)*s1 - '0') - ((int)*s2 - '0');
			break;
		}
		s1++;
		s2++;
	}
	return (same);
}
