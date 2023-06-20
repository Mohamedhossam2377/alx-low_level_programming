#include "main.h"

/**
 * print_to_98 - print number from n to 98
 *
 * @n: is the number we start with
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (n <= 9)
			{
				_putchar(n + '0');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
