#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - frees memory storing list
 * @head: pointer to starting of list
 */
void free_listint2(listint_t **head)
{
	listint_t *last;

	if (head == NULL)
		return;

	last = *head;
	while (*head)
	{
		last = *head;
		(*head) = (*head)->next;
		free(last);
	}

	*head = NULL;
}
