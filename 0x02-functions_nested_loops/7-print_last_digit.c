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

	last = n % 10;
	if (last < 0)
		last = 0 - last;
	_putchar('0' + last);
	return (last);
}
