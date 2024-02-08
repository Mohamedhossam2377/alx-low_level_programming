#include "main.h"

/**
 * print_binary - converts a binary number to an unsigned int
 *
 * @n: number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int size = sizeof(n) * 8, print = 0;

	while (size)
	{
		if (n & 1L << --size)
		{
			_putchar('1');
			print++;
		}
		else if (print)
			_putchar('0');
	}
	if (!print)
		_putchar('0');
}
