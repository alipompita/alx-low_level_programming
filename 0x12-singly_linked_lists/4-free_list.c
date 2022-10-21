#include "lists.h"
#include <stdio.h>

/**
 * free_list - frees list
 * @head: pointer to list
 */
void free_list(list_t *head)
{
	list_t *h;

	h = head;
	while (head)
	{
		h = head;
		head = head->next;
		free(h->str);
		free(h);
	}
	free(head);
}
