#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowcase ten times
 *
 */
void print_alphabet_x10(void)
{
	int ch;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar(10);
	}
}
