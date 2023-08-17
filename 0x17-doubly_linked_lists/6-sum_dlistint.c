#include "lists.h"

/**
 * sum_dlistint - Return the sum of all the data
 * @head: pointer to head
 * Return: sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		s = s + head->n;
		head = head->next;
	}
	return (s);
}
