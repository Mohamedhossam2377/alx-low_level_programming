#include "main.h"

/**
 * print_last_digit - chech for alpha
 *
 * @n: is the checker character
 *
 * Return: always return 0 (Success)
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = (-1) * (n % 10);
	}
	else
	{
		last = n % 10;
	}
	_puchar(last + '0');
	return (last);
}
