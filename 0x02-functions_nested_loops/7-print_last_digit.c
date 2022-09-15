#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - gets last digit of number
 * @n: number to compute
 * Return: always returns last digit of input
 */
int print_last_digit(int n)
{
	int last;
	int ab;

	if (n < 0)
		ab = 0 - n;
	else
		ab = n;
	last = ab % 10;
	_putchar('0' + last);
	return (last);
}
