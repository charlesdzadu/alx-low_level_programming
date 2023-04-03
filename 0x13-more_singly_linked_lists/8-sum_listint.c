#include "lists.h"

/**
 * sum_listint - Total  of all the data in a listint_t list
 * @head: A pointer to a first element of a linked list
 *
 * Return: Total of data in a linked list
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		total += tmp->n;
		tmp = tmp->next;
	}

	return (total);
}
