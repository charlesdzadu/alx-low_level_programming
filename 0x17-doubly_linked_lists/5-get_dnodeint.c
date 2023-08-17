#include "lists.h"

/**
 * get_dnodeint_at_index - Return the node at index
 * @head: pointer to head
 * @index: index of node
 * Return: node at index or NULL if it failed
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);
	while (i <= index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
