#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase from a to z ten times
 */
void print_alphabet_x10(void)
{
	int ch;
	int i;

	for (i = 0; i < 10, i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar(ch);
	}
}
