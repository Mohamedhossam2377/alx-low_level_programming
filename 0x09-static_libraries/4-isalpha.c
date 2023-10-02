#include "main.h"

/**
 * _isalpha - chech for alpha
 *
 * @c: is the checker character
 *
 * Return: return 1 when it is alphapet otherwise return 0 (Success)
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	} else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
