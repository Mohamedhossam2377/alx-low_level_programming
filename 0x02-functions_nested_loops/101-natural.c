#include "main.h"

/**
 * main - Entry point
 *
 * Discreption: natural numbers bellow 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int count = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			count = count + i;
		}
	}
	printf("%d\n", count);
	return (0);
}
