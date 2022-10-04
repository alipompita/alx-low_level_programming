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
 * _strcpy - copies string
 * @dest: destination address
 * @src: source address
 * Return: copy of string
 */
char *_strcpy(char *dest, char *src)
{
	(void) dest;
	(void) src;

	return (dest);
}
