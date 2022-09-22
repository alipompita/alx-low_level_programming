#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: destination string
 * @src: source string
 * Return: string reference
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	i = 0;
	while (dest[i] != '\n')
		i++;

	c = 0;
	while (src[c] != '\n')
	{
		*(dest + i) = src[c];
		i++;
		c++;
	}
	return (dest);
}
