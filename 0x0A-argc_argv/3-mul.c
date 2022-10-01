#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: arguments passed
 * Return: 1 if program receives less than
 * 2 arguments, else return 0
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);

}
