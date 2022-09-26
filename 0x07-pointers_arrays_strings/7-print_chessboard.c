#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: a multidimensional array
 */
void print_chessboard(char (*a)[8])
{
	int x, i;

	for (i = 0; i < 8; i++)
	{
		for (x = 0; x < 8; x++)
			_putchar(a[i][x]);
		_putchar(10);
	}
}
