#include "lists.h"

/**
 * pop_listint - Remove the head node of a linked list
 * @head: A pointer to the header of linked list
 *
 * Return: The data of deleted head
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (n);
}
