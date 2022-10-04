#include "main.h"

/**
 * _strncat - concatenates string with specific bytes
 * @dest: destination string
 * @src: string source
 * @n: number of bytes
 * Return: String address
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len = 0;
	char *temp = dest, *begin = src;

	while (*dest)
		dest++;

	while (*src)
	{
		src++;
		len++;
	}
	if (n  > len)
		n = len;

	src = begin;

	for (i = 0; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
