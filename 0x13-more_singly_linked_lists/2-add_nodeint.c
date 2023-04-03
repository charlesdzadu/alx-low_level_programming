#include "lists.h"

/**
 * add_nodeint - Add a new node of int to be begining of nodes
 * @head: A pointer to the head of node
 * @n: New data (int) to add to node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
