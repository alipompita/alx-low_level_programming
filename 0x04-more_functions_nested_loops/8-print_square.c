#include <stdio.h>
#include "main.h"

/**
 * print_square - prints diagonal
 * @size: size of square
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			int c = size;

			while (c > 0)
			{
				_putchar('#');
				c--;
			}
			_putchar('\n');
		}
	} else
		_putchar('\n');
}
