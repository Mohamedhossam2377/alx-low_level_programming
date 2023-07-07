#include "main.h"

/**
 * _isupper - check the uppercase.
 *
 * @c: the value
 *
 * Return: return 1 if upercase and return 0 if else.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
