#include "lists.h"
#include <stdio.h>

/**
 * listint_len - counts elements of a list
 * @h: pointer to first node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
