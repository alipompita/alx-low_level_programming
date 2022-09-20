#include <stdio.h>
#include "main.h"

/**
 * _strlen - calculates length of string
 * @s: address to the string variable
 * Return: size of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * print_rev - prints string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = _strlen(s);

	i = len - 1;

	while (i >= 0)
	{
		if (s[i] != '\0')
			_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
