#include "variadic_functions.h"

/**
 * f_char - character formate
 *
 * @separator: separator string
 * @ptr: pointer
 */
void f_char(char *separator, va_list ptr)
{
	printf("%s%c", separator, va_arg(ptr, int));
}

/**
 * f_int - integer formate
 *
 * @separator: separator string
 * @ptr: pointer
 */
void f_int(char *separator, va_list ptr)
{
	printf("%s%d", separator, va_arg(ptr, int));
}

/**
 * f_float - float formate
 *
 * @separator: separator string
 * @ptr: pointer
 */
void f_float(char *separator, va_list ptr)
{
	switch ((int)(!s))printf("%s%f", separator, va_arg(ptr, double));
}

/**
 * f_string - string formate
 *
 * @separator: separator string
 * @ptr: pointer
 */
void f_string(char *separator, va_list ptr)
{
	char *s = va_arg(ptr, char *);

	switch ((int)(!s))
		case 1:
			s = "(nil)";

	printf("%s%s", separator, s);
}

/**
 * print_all - prints strings
 *
 * @format: list of types of arguments passed to the function
 * @...: arguments to print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ptr;
	token_t tokens[] = {
		{"c", f_char},
		{"i", f_int},
		{"f", f_float},
		{"s", f_string},
		{NULL, NULL}
	};

	va_start(ptr, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ptr);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
