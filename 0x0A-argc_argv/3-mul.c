#include "main.h"
#include <stdio.h>
#include <stlib.h>

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
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
