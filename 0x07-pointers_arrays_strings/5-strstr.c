#include "main.h"
#include <stdio.h>

/**
 * _strstr -  finds substring location.
 * @haystack: string to search in
 * @needle: string to locate
 * Return:  a pointer to the beginning substring
 * or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (starth);
		haystack = starth + 1;
	}
	return (NULL);
}
