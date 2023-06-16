#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : two two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (a != c || b != d || a + b < c + d)
					{
					if (a + b <= c + d || (b = c && a = d))
					{
						putchar(a + '0');
						putchar(b + '0');
						putchar(' ');
						putchar(c + '0');
						putchar(d + '0');
					if (a + b != 17 || c + d != 18)
					{
						putchar(',');
						putchar(' ');
					}
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
