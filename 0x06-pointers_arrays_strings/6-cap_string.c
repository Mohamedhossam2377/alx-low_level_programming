#include "main.h"
#include <stdio.h>

/**
 * is_lower - determines if is lowercase
 *
 * @c: character
 *
 * Return: 1 if ture and 0 if false
 */
int is_lower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * is_delimiter - determine if ascii is a delimiter
 *
 * @c: character
 *
 * Return: 1 if true and 0 if false
 */
int is_delimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalize all words
 *
 * @str: string to capitalize
 *
 * Return: str
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int found_delimiter = 1;

	while (*str)
	{
		if (is_delimiter(*str))
			found_delimiter = 1;
		else if (is_lower(*str) && found_delimiter)
		{
			*str -= 32;
			found_delimiter = 0;
		}
		else
			found_delimiter = 0;
		str++;
	}
	return (ptr);
}
