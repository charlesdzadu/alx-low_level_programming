#include "lists.h"

/**
 * add_dnodeint_end - Add a new node to last position
 * @head: pointer to head
 * @n: integer
 * Return: address of new element or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_n = (dlistint_t *) malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *head;

	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	new_n->next = NULL;
	if (*head == NULL)
	{
		new_n->prev = NULL;
		*head = new_n;
		return (new_n);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	new_n->prev = tmp;
	tmp->next = new_n;
	return (new_n);
}
