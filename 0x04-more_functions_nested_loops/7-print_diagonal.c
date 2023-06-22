#include "main.h"

/**
 * print_diagonal - print diagonal line.
 *
 * @n: the value
 *
 * Return: Always return 0.
 */

void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			break;
		}

		if (i == n)
		{
			_putchar('/');
			break;
		}
		_putchar(' ');
		_putchar('\n');
	}
	_putchar('\n');
}
