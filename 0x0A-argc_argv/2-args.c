#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: argument count
 * @argv: arguments passed
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
