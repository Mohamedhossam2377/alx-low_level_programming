#include "main.h"

/**
 * jack_bauer - every minute
 *
 * Return: always return 0 (Success)
 */
void jack_bauer(void)
{
	for (int x = 0; x <= 23; x++)
	{
		for (int y = 0; y <= 60; y++)
		{
			_putchar(x / 10);
			_putchar(x % 10);
			_putchar(y / 10);
			_putchar(y % 10);
		}
		_putchar('\n');
	}
}
