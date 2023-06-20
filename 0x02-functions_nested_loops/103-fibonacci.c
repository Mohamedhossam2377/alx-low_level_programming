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
	float total_result;

	for (i = 1; result <= 4000000; i++)
	{
		result = f1 + f2;

		if (result % 2 == 0)
		{
			total_result += result;
		}
		f1 = f2;
		f2 = result;
	}
	printf("%.0f\n", total_result);

	return (0);
}
