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
		putchar(nu + '0');
		putchar(',');
		putchar(' ');
		nu++;
	}

	putchar('\n');
	return (0);
}
