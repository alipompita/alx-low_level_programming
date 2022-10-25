#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds node at beggining of list
 * @head: pointer to the first element
 * @n: integer to add to list
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
