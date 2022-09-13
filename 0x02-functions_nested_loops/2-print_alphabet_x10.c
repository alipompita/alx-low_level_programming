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
			putchar(ch);
		putchar(10);
	}
}

/**
 * main - starting point
 *
 * Return: 0
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
