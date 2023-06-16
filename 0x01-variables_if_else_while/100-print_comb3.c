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

	while (a <= 9)
	{
		while (b <= 9)
		{
			if (a < b)
			{
				putchar(a + '0');
				putchar(b + '0');
				b++;
			} else
			{
				b++;
			}
		}

		putchar(',');
		putchar(' ');
		a++;
	}

	putchar('\n');
	return (0);
}
