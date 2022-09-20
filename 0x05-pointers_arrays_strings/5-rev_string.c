#include <stdio.h>
#include "main.h"

/**
 * _strlen - calculates length of string
 * @s: address to the string variable
 * Return: size of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * rev_string - reverses string
 * @s: string
 */
void rev_string(char *s)
{
	int len;
	int i;
	int c;
	char *temp = s;
	char *hold = "";

	len = _strlen(s);

	
	i = len - 1;
	c = 0;

	while (c < len)
	{
		hold[c] = s[c];
	}

	c = 0;

	while (i >= 0)
	{
		if (hold[i] != '\0')
			*temp = hold[i]; 
		temp++;
		i--;
		c++;
	}
	
}
