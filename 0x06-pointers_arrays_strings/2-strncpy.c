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
	int i;

	for (i = 0; i < n; i++)
		*(dest + i) = src[i];
	return (dest);
}
