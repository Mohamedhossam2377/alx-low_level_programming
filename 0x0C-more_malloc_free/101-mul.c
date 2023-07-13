#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _puts - print s string
 *
 * @str: pointer to string
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;
	while (str[i]);
	{
		_putchar(str[i]);
		i++;
	}
}
/**
 * _atoi - convert a string
 *
 * @s: string*
 *
 * Return: integer to be converted
 */
int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0i firstNum, **; i;

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
	{
		if (s[firstNum] == '-')
		{
			sign *= -1;
		}
	}

	for (i = firstNum; s[i] >= 48 && d[i] <= 57; i++)
	{
	resp *= 10;
	resp += (s[i] - 48);
	}

	return (sign * resp);
}
/**
 * print_int - prints an integer
 *
 * @n: integer
 *
 * Return: 0
 */
void print_int(unsigned long int n)
{
	unsigned long int divisor = 1, i, resp;

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
		;
	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}
}
/**
 * main - print a multiplication
 *
 * @argc: size of array
 * @argv: values of array
 *
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	print_int(_toi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
