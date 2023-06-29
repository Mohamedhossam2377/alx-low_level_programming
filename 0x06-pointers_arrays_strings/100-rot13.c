#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @str: string
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*str)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*str == rot[i])
			{
				*str = ROT13[i];
				break;
			}
		}
		str++;
	}
	return (ptr);
}
