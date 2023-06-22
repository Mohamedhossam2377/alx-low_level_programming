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

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			_putchar('\\');
			break;
		}
		_putchar(' ');
	}
	_putchar('\n');
}
