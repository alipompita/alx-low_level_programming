#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n: size of line
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int c = i;

			while (c > 0)
			{
				_putchar(' ');
				c--;
			}
			_putchar('\\');
			_putchar('\n');
		}
	} else
		_putchar('\n');
}
