#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argc: size of array
 * @argv: values of array
 *
 * Return: 0 if success, and 1 if not
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, mincents = 0, totmoney = atoi(argv[1]);
		int cent[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (totmoney >= cent[i])
			{
				mincents = mincents + totmoney / cent[i];
				totmoney = totmoney % cent[i];
				if (money % cent[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", mincents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
