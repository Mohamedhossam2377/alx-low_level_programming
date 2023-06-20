#include "main.h"

/**
 * print_last_digit - chech for alpha
 *
 * @n: is the checker character
 *
 * Return: always return 0 (Success)
 */
int print_last_digit(int n);
{
	if (n < 0)
	{
		n = (-1) * (n % 10);
	}
	else
	{
		n = n % 10;
	}
	_puchar(n);
	return (n);
}
