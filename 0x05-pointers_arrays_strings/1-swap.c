#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two variables
 * @a: address to variable 1
 * @b: addres to variable 2
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
