#include "main.h"

/**
 * _strlen - calculates length of string
 * @s: string
 * Return: int size of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\n')
		i++;
	return (i);
}

/**
 * _strcat - concatenates 2 strings
 * @dest: destination string
 * @src: source string
 * Return: string reference
 */
char *_strcat(char *dest, char *src)
{
	int old_len;
	int i, c;

	old_len = _strlen(dest);

	i = old_len;
	c = 0;
	while (src[c] != '\n')
	{
		*(dest + i) = src[c];
		i++;
		c++;
	}
	return (dest);
}
