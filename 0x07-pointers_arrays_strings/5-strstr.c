#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string
 * @needle: string
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *ptr1 = haystack;
		char *ptr2 = needle;

		while (*ptr1 == *ptr2 && *ptr2 != '\0')
		{
			ptr1++;
			ptr2++;
		}

		if (*ptr2 == '\0')
			return (haystack);
	}

	return (0);
}
