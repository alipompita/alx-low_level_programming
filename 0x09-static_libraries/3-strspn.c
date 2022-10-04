#include "main.h"

/**
 * _strspn - get length of prefix substring
 * @s: source string
 * @accept: substring
 * Return: number of matching bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, match;
	char *origin = accept;

	while (*s)
	{
		match = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				match = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = origin;
		if (match == 0)
			break;
	}
	return (count);

}
