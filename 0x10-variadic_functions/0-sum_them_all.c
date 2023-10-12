#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 *
 * @n: number of arguments
 * @...: arguments to sum
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i = n;
	va_list ptr;

	if (!n)
		return (0);
	va_start(ptr, n);
	while (i--)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}
