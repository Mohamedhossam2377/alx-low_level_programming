#include "main.h"

/**
 * _islower - check for lowercase character
 *
 * @c : input
 *
 * Return: return 1 if lowercase otherwise return 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
