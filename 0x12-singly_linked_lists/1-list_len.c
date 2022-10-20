#include "lists.h"
#include <stdio.h>

/**
 * list_len - caltulates length of list
 * @h: linked list to calculate length
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	unsigned int elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
