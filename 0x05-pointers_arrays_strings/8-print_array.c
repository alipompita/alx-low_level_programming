#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array of integers
 * @a: array of integers
 * @n: size of array
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", a[i]);
	}

	printf("\n");
}
