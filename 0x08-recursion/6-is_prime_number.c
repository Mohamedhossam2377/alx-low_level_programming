#include "main.h"
#include <stdio.h>

/**
 * prime - check if it is prime
 *
 * @n: integer number
 * @m: integer different number
 *
 * Return: nothing
 */
int prime(int n, int m)
{
	if (m >= n && n > 1)
		return (1);
	else if (n % m == 0 || n <= 1)
		return (0);
	else
		return (prime(n, m + 1));
}
/**
 * is_prime_number - the input integer is a prime number
 *
 * @n: integer number
 *
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
