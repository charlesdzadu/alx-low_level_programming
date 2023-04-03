#include "main.h"

/**
 * free_listint2 - Free a linked list from memory
 * @head: A pointer to a header of a linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
