#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - find first occurrence of byte
 * in a string
 * @s: source string
 * @accept: candidate string
 * Return: address of byte
 */
char *_strpbrk(char *s, char *accept)
{
	char *origin = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = origin;
		s++;
	}

	return (NULL);

}
