#include "main.h"

/**
 * _strncpy - copies string
 * @dest: destination address
 * @src: string to copy
 * @n: number of characters to copy
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < n; i++)
	{
		if (i > len)
			*(dest + i) = '\0';
		else
			*(dest + i) = src[i];
	}

	return (dest);
}
