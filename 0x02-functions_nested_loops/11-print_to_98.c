#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: starting point
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
			printf("%d, ", i);
	} else
	{
		for (i = n; i <= 98; i++)
			printf("%d, ", i);
	}
	_putchar('\n');
}
