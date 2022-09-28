#include "main.h"

/**
 * _sqrt_recursion - calculates natural sqareroot
 * @n: input number
 * Return: int, natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - calculates squareroot of number
 * @n: input number
 * @i: iterator
 * Return: int, squareroot of n
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
