#include "main.h"
#include <stdio.h>

/**
 * _strchr - finds character in string
 * @s: string to look in
 * @c: character to find in string
 * Return: character location if found or NULL
 * if character not found
 */
char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			break;
	}

	if (*s == c)
		return (s);
	else
		return (NULL);
}
