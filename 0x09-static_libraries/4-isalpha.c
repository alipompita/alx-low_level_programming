#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks if character is a letter
 *@c:  candidate character for checking if is alphabet letter
 * Return: int 1 if character is a letter otherwise returns 0
 */
int _isalpha(int c)
{
	int result;

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		result = 1;
	else
		result = 0;
	return (result);
}
