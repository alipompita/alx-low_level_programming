#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: candidate number
 * Return: int 1 or 0
 */
int print_sign(int n)
{

	char result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	} else if (n < 0)
	{
		_putchar('-');
		result = -1;
	} else
	{
		_putchar('0');
		result = 0;
	}

	return (result);
}
