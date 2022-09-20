#include "main.h"
#include <stdio.h>

/**
 * _puts - prints characters of a string
 * @str: string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
