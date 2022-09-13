#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet int lowcase
 *
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
