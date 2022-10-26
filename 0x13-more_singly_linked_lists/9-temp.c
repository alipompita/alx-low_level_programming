#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - adds node at specific index
 * @head: pointer to first node
 * @idx: specified index
 * @n: value to add
 * Return: pointer to new element
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = (*head);
		*head = new;
		return (new);
	}

	while (*head)
	{
		if ((idx - 1) == 1)
		{
			new->next = (*head)->next;
			(*head)->next = new;
			break;
		}
		(*head) = (*head)->next;
		i++;
	}
	return (new);
}
