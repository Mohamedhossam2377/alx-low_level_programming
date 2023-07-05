#include "main.h"

/**
 * count - count the characters of the string
 *
 * @s: string
 *
 * Return: count of characters
 */
int count(char *s)
{
	int n = 0;

	if (*s > '\0')
		n = count(s + 1) + n + 1;

	return (n);
}
/**
 * check_palindrome - check for palindrome
 *
 * @s: string
 * @i: integer
 * @j: integer
 * @mod: to chek equal
 *
 * Return: 1 for palindrome or 0 if not
 */
int check_palindrome(char *s, int i, int j, int mod)
{
	if ((i == j && mod != 0) || (i == j + 1 && mod == 0))
		return (1);
	else if (s[i] != s[j])
		return (0);
	else
		return (check_palindrome(s, i + 1, j - 1, mod));
}
/**
 * is_palindrome - a string is a palindrome
 *
 * @s: string
 *
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int last = count(s);

	return (check_palindrome(s, 0, last - 1, last % 2));
}
