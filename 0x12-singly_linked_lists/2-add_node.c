#include "lists.h"
#include <string.h>

/**
 * add_node - adds node at the beginning of list
 * @head: pointer to the head
 * @str: string to add to new node
 * Return: pointer to appended list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	new = malloc(sizeof(list_t));
	while (str[len])
		len++;

	new->len = len;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
