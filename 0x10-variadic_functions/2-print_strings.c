#include "variadic_functions.h"

/**
 * print_strings - prints strings
 *
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: arguments to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *s;
	va_list ptr;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	while (i--)
		printf("%s%s", (s = va_arg(ap, char *)) ? s : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(ptr);
}
