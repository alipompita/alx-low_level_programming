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
	while (dest[i] != '\0')
		i++;

	c = 0;
	while (src[c] != '\0')
	{
		*(dest + i) = src[c];
		i++;
		c++;
	}
	*(dest + i) = '\0';
	return (dest);
}
