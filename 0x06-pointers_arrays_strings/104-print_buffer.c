#include "main.h"
#include <stdio.h>

/**
 * isprintableascii - determine if n is a printable ascii char
 *
 * @n: integer
 *
 * Return: 1 if true and 0 if false
 */
int isprintableascii(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printhexes - print hex values for string b
 *
 * @b: string
 * @start: starting position
 * @end: ending position
 *
 * Return: nothing
 */
void printhexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;

	}
}

/**
 * printascii - print ascii values for string b
 *
 * @b: string
 * @start: starting position
 * @end: ending position
 *
 * Return: nothing
 */
void printascii(char *b, int start, int end)
}
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isprintableascii(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - print buffer
 *
 * @b: string
 * @size: size of buffer
 *
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printhexes(b, start, end);
			printascii(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
