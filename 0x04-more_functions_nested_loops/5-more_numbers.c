#include "main.h"

/**
 * more_numbers - print 10 times the number from 0 to 14 .
 *
 * Return: Alwaysreturn 0.
 */

void more_numbers(void)
{
	int i;
	int num;

	for (i = 0; i <= 9; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				putchar((num / 10) + '0');
			}
			putchar((num % 10) + '0');
		}
		putchar('\n');
	}
}
