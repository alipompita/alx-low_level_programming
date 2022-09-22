#include "main.h"

/**
 * reverse_array - reverses array elements
 * @a: array of integers
 * @n: nelement count
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n--)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n] = temp;
	}
}
