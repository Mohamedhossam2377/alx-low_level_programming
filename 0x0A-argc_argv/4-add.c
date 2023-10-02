#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: size of array
 * @argv: values of array
 *
 * Return: 0 if success, and 1 if not
 */
int main(int argc, char *argv[])
{
	int add = 0;
	char *i;

	while (--argc)
	{
		for (i = argv[argc]; *i; i++)
			if (*i < '0' || *i > '9')
				return (printf("Error\n"), 1);
		add = add + atoi(argv[argc]);
	}
	printf("%d\n", add);
	return (0);
}
