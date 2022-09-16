#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative - check if number is positive
 * @i: number
 * Return: 0 default
 */
void positive_or_negative(int i)
{
	if (i == 0)
		printf("%d is zero\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else
		printf("%d is negative", i);
}
