#include "lists.h"

/**
 * add_nodeint - Add a new node of int to be begining of nodes
 * @head: A pointer to the head of node
 * @n: New data (int) to add to node
 * Return: A pointer to a new node created
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
