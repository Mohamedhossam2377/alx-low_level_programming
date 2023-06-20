#include "main.h"

/**
 * print_sign - chech for alpha
 *
 * @n: is the checker character
 *
 * Return: return 1 if it is positive, return 0 if ut is zero
 * and return -1 if it is negative (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
