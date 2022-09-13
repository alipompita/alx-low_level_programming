#include <stdio.h>
#include "main.h"

/**
 * _islower - checks if a letter is lowercase
 * @c: charcater to check
 * Return: integer value 1 if true otherwise 0
 */
int _islower(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
		result = 1;
	else
		result = 0;

	return (result);
}

/**
 * main - starting point
 *
 * Return: 0
 */
int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar(10);
	return (0);
}
