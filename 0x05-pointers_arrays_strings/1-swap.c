#include "main.h"


/**
 * swap_int - Swap to integer
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
