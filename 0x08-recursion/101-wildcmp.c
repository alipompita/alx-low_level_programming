#include "main.h"

/**
 * wildcmp - checks if strings are identical
 * @s1: string one
 * @s2: string two
 * Return: 1 if strings are identical else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
		return (1);


	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
