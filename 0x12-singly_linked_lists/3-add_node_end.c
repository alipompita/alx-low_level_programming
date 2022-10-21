#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds node at the end of list
 * @head: pointer to first node
 * @str: pointer to input string
 * Return: pointer to new element;
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new, *h;
	int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[len])
		len++;

	new->len = len;
	new->str = strdup(str);
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	} else
	{
		new->next = NULL;
		h = *head;
		while (h->next)
			h = h->next;
		h->next = new;
	}

	h = *head;

	return (new);
}
