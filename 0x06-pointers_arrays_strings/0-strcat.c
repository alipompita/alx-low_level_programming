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
	int old_len, new_len;
	int i, c;

	old_len = _strlen(dest);
	new_len = old_len + _strlen(src);

	i = old_len;
	c = 0;
	while (i < new_len)
	{
		*(dest + i) = src[c];
		i++;
		c++;
	}
	return (dest);
}
