#include "main.h"

/**
 * _memcpy - copies specified memeoty area
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes to copy
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *begin = dest;

	while (n--)
	{
		*dest++ = *src++;
	}

	return (begin);
}
