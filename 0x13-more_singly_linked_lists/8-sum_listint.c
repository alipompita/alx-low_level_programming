#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - sums values in list
 * @head: pointer to first node
 * Return: sum of values;
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
