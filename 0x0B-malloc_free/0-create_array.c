#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array and assigns first byte
 * @size: size of array to create
 * @c: value to assign in first byte
 * Return: pointer to the array, or NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));

	if (s == NULL || s == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
