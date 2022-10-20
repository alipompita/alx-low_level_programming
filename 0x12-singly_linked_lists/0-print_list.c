#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints strings in a linked list
 * @h: pointer ti head node
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	unsigned int elements = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		elements++;
	}
	return (elements);
}
