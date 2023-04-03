#include "main.h"

/**
 * insert_nodeint_at_index - Insert node at given index  in a linked list,
 * @head: Pointer to the fisrt node
 * @idx: Index of a new node
 * @n: Data to be insert
 *
 * Return: A pointer to a new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node;
	listint_t *tmp = *head;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			node->next = tmp->next;
			tmp->next = node;
			return (node);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
