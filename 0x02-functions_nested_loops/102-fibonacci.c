#include "main.h"

/**
 * main - Entry point
 *
 * Discreption :
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long f1 = 0, f2 = 1, result;

	for (i = 1; i <= 50; i++)
	{
		result = f1 + f2;
		printf("%lu", result);
		f1 = f2;
		f2 = result;

		if (i == 50)
		{
			printf("\n")
		}
		else
		{
			printf(", ");
		}
	}

	return (0);
}
