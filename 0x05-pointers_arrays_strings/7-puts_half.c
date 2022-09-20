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
 * puts_half - prints half of string
 * @str: string
 */
void puts_half(char *str)
{
	int len;
	int i;
	int half;

	len = _strlen(str);

	half = (len - 1) / 2;

	i = len - half - 1;

	while (i < len)
	{
		if (str[i] != '\0')
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
