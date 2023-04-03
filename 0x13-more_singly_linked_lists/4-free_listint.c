#include "main.h"

/**
 * free_listint - Free a linked list in memory
 * @head: Head of listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
