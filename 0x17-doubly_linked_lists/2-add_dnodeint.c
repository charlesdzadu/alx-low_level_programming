#include "lists.h"

/**
 * add_dnodeint - Add a new node to first position
 * @head: pointer to head
 * @n: integer
 * Return: address of new element or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_n = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	new_n->prev = NULL;
	if (*head == NULL)
	{
		new_n->next = NULL;
		*head = new_n;
		return (new_n);
	}
	new_n->next = *head;
	(*head)->prev = new_n;
	*head = new_n;
	return (new_n);
}
