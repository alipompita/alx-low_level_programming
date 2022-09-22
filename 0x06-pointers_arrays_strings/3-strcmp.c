#include "main.h"
#include <stdio.h>
/**
 *
 */
int _strtotal (char *s)
{
	int total = 0;

	do
	{
		printf("%d\n", *s);
		total += *s;
	}
	while (*s++ != '\0');

	return (total);
}

/**
 * _strcmp - compares 2 strings
 * @s1: string 1
 * @s2: String 2
 * Return: int difference
 */
int _strcmp(char *s1, char *s2)
{

	return (*s1 - *s2);
}
