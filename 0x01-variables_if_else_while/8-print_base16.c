#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : Hexadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char h = 'a';

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}

	while (h <= 'f')
	{
		putchar(h);
		h++;
	}

	putchar('\n');
	return (0);
}
