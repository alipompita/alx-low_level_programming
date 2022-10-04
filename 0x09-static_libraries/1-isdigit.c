#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks if character is digit
 * @c: candidate character
 * Return: int 0 or 1
 */
int _isdigit(int c)
{
	int result;

	if (c >= '0' && c <= '9')
		result = 1;
	else
		result = 0;
	return (result);
}
