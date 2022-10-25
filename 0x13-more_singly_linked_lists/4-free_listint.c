#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees memory storing list
 * @head: pointer to starting of list
 */
void free_listint(listint_t *head)
{
	listint_t *last;

	last = head;
	while (head)
	{
		last = head;
		head = head->next;
		free(last);
	}
	free(head);

}
