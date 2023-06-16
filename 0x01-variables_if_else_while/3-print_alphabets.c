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

	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}

	putchar('\n');
	return (0);
}
