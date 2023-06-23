#include <stdio.h>

/**
 * _sqrt - square root.
 *
 * @x: input number.
 *
 * Return: square of x.
 *
 */

double _sqrt(double x)
{
	float sqrt, i;

	sqrt = x / 2;
	i = 0;

	while (sqrt != i)
	{
		i = sqrt;
		sqrt = (x / i + i) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - printthe largest number.
 *
 * @num: number;
 */

void largest_prime_factor(long int num)
{
	int pmnum, largest;

	while (num % 2 == 0)
		num = num / 2;

	for (pmnum = 3; pmnum <= _sqrt(num); pmnum += 2)
	{
		while	(num % pmnum == 0)
		{
			num = num / pmnum;
			largest = pmnum;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Return: Always return 0.
 */

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
