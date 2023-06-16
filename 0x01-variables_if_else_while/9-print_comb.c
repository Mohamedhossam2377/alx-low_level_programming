#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nu = 0;

	while (nu <= 9)
	{
		if (nu == 9)
		{
			putchar(nu);
		} else
		{
			putchar(nu + '0');
			putchar(',');
			putchar(' ');
		}
		nu++;
	}

	return (0);
}
