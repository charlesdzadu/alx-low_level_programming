#include "lists.h"

/**
 * free_dlistint - Free a list
 * @head: pointer to head
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *t = head;

	while (head != NULL)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
