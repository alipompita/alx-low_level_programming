#include <stdio.h>
#include "main.h"

/**
 * _islower - checks if a letter is lowercase
 * @c: charcater to check
 * Return: integer value 1 if true otherwise 0
 */
int _islower(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
		result = 1;
	else
		result = 0;
	return (result);
}
