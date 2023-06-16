#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : alpABET
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char y = 'a';
	char z = 'A';

	while (y <= 'z')
	{
		putchar(y);
		y++;
	}

	while (z <= 'Z')
	{
		putchar(z);
		z++;
	}

	putchar('\n');
	return (0);
}
