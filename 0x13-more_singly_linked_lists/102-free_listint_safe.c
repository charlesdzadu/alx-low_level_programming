#include "lists.h"

/**
 * free_listint_safe - Free a linked list (safe version)
 * @h: Header of linked list
 *
 * Return: Total of node in a linked list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t total = 0;
	int r;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		r = *h - (*h)->next;
		if (r > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			total++;
		}
		else
		{
			free(*h);
			*h = NULL;
			total++;
			break;
		}
	}

	*h = NULL;

	return (total);
}
