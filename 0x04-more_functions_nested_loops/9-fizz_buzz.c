#include "main.h"

/**
 * main - the start point.
 *
 * Return: Always return 0.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && !(i % 5 == 0))
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && !(i % 3 == 0))
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i == 100)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}

	return (0);
}
