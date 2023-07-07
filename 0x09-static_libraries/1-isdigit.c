#include "main.h"

/**
 * _isdigit - check if it is a digit.
 *
 * @c: the value
 *
 * Return: return 1 if digit and return 0 if else.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
