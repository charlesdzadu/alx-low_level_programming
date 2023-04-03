#include "main.h"

/**
 * listint_len - Get number od node in  linked list
 * @head:  Head of node
 * Return: The number of total node
 */

size_t listint_len(const listint_t *head)
{
	int count = 0;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}

	return (count);

}
