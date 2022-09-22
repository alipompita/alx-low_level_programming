#include "main.h"

/**
 * string_toupper - changes letters to uppercase
 * @s: string input
 * Return: string address
 */
char *string_toupper(char *s)
{
	char *begin = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (begin);
}
