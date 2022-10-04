#include "main.h"

/**
 * is_prime_number - checks for prime numbers
 * @n: input number
 * Return: 1 if n is prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
 * _prime - calculates if number is prime
 * @n: candidate number
 * @i: iterator
 * Return: 1 if n is prime otherwise 0
 */
int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime(n, i - 1));
}
