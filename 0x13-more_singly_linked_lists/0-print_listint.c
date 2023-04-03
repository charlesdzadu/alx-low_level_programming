#include "lists.h"

/**
 * print_listint - Print a list in linked list
 * @head:  Head of node
 * Return: The number of total node
 */

size_t print_listint(const listint_t *head)
{
	int count = 0;

	while (head != null)
	{
		count++;
		printf("%d", head->data);
		head = head->next;
	}

	return (count);

}
