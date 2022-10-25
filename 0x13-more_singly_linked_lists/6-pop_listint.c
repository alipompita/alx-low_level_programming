#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes head note from list
 * @head: pointer to first node
 * Return: value in head note
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = *head;
	(*head) = (*head)->next;
	n = temp->n;
	free(temp);
	return (n);

}
