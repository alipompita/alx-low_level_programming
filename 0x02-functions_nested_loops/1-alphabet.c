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
		putchar(ch);
	putchar(10);
}

/**
 * main - starting point
 *
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
