#include "lists.h"

/**
 * get_nodeint_at_index - Get the node at a given index in a linked list
 * @head: Head of a linked list
 * @index: Index of search element
 * Return: Pointer to a node at a given index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *tmp = head;

	while (tmp && n < index)
	{
		tmp = tmp->next;
		n++;
	}

	return (tmp ? tmp : NULL);
}
