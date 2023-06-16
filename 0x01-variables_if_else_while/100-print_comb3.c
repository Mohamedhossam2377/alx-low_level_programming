#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b = 0;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a < b)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
