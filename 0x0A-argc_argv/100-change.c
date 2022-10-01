#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates change
 * @argc: argument count
 * @argv: arguments passed
 * Return: 0 if everything is fine
 */
int main(int argc, char *argv[])
{
	int coins = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
		{
			coins++;
			cents -= 25;
		} else if (cents >= 10)
		{
			coins++;
			cents -= 10;
		} else if (cents >= 5)
		{
			coins++;
			cents -= 5;
		} else if (cents >= 2)
		{
			coins++;
			cents -= 2;
		} else
		{
			coins++;
			cents--;
		}
	}
	printf("%d\n", coins);
	return (0);
}
