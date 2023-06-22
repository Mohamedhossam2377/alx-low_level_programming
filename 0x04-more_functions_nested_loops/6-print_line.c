#include "main.h"

/**
 * print_line - print line.
 *
 * @n: the value
 *
 * Return: Always return 0.
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}
