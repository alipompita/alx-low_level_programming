#include "main.h"

/**
 * leet - encodes strings
 * @s: string
 * Return: replaced String
 */
char *leet(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		char l = s[i];

		if (l == 'a' || l == 'A')
			*(s + i) = '4';
		else if (l == 'e' || l == 'E')
			*(s + i) = '3';
		else if (l == 'o' || l == 'O')
			*(s + i) = '0';
		else if (l == 't' || l == 'T')
			*(s + i) = '7';
		else if (l == 'l' || l == 'L')
			*(s + i) = '1';

		i++;
	}

	return (s);
}
