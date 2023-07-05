#include "main.h"

/**
 * squ - square root
 *
 * @n: integer number
 * @x: square
 *
 * Return: square root
 */
int squ(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (squ(n, x + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - the natural square root of a number
 *
 * @n: integer number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (squ(n, 1));
}
