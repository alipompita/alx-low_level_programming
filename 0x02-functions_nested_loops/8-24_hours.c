#include <stdio.h>
#include "main.h"

/**
 * get_first - gets first digit
 * @n: candidate
 * Return: first digit as int
 */
int get_first(int n)
{
	while (n > 10)
		n = n / 10;
	return (n);
}

/**
 * jack_bauer - prints jack bauer time
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			if (h >= 10)
			{
				int firsth, lasth;

				firsth = get_first(h);
				lasth = h % 10;
				_putchar('0' + firsth);
				_putchar('0' + lasth);
			} else
			{
				_putchar('0' + 0);
				_putchar('0' + h);
			}

			_putchar(':');

			if (m >= 10)
			{
				int firstm, lastm;

				firstm = get_first(m);
				lastm = m % 10;
				_putchar('0' + firstm);
				_putchar('0' + lastm);
			} else
			{
				_putchar('0' + 0);
				_putchar('0' + m);
			}
			_putchar('\n');
		}
	}
}
