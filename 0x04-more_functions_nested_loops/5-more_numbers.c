#include "main.h"
#include <stdio.h>

/**
 * get_first - get first digit of number
 * @n: number
 * Return: int first digit
 */
int get_first(int n)
{
	while (n <= 10)
		n = n / 10;
	return (n);
}

/**
 * more_numbers - prints numbers from 0 to 14
 *
 */
void more_numbers(void)
{
	int i, c;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i < 10)
				_putchar('0' + i);
			else
			{
				int f, l;

				f = get_first(i);
				l = i % 10;
				_putchar('0' + f);
				_putchar('0' + l);
			}
		}
		_putchar('\n');
	}
}
