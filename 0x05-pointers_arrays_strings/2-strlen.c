#include "main.h"


/**
 * _strlen - lenght of string
 *
 * @s: int parameter
 *
 * Return: count
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\n'; s++)
	{
		++count;
	}

	return (count);
}
