#include <stdio.h>
#include "main.h"

/**
 * _abs - computes absolute values
 * @v: number to compute
 * Return: absolute value of input
 */
int _abs(int v)
{
	int distance;

	if (v == 0)
		distance = 0;
	else if (v > 0)
		distance = v - 0;
	else
		distance = 0 - v;
	return (distance);
}
