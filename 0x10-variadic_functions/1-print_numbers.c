#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 *
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: arguments to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ptr;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	while (i--)
		printf("%d%s", va_arg(ptr, int), i ? (separator ? separator : "") : "\n");
	va_end(ptr);
}
