#include <stdio.h>
#include <stdlib.h>
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
	
	ab = abs(n);
	last = ab % 10;
	_putchar('0' + last);
	return (last);
}
