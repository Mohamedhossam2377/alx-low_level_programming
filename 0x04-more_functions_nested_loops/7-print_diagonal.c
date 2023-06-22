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
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
	}
	_putchar('\n');
}
