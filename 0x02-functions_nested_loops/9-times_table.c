#include <stdio.h>
#include "main.h"

/**
 * get_first - get first digit of number
 * @n: number
 * Return: int first digit
 */
int get_first(int n)
{
	while (n >= 10)
	{
		n = n / 10;
	}

	return (n);
}

/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int i;
	int c;
	int result;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 9; c++)
		{
			result = i * c;
			if (result < 10)
			{
				_putchar('0' + result);
			} else
			{
				int first = get_first(result);
				int last = result % 10;

				_putchar('0' + first);
				_putchar('0' + last);
			}

			if (c < 9)
			{
				_putchar(',');
				_putchar(9);
			} else
				_putchar('\n');
		}
	}
}
