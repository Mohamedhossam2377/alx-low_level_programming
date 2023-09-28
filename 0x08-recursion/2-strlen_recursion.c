#include "main.h"

/**
 * _strlen_recursion - lenght of a string
 *
 * @s: string
 *
 * Return: lenght of a string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*S > '\0')
	{
		len += _strlen_recursion(s + 1) + 1;
	}

	return (len);
}
