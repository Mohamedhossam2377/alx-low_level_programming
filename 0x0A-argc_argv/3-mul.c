#include <stdio.h>
#include <stdlib.h>

/**
 * main - print multiplies two numberi
 *
 * @argc: size of array
 * @argv: values of array
 *
 * Return: 0 if success and 1 if not
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
