#include "lists.h"

/**
 * dlistint_len - Return the total element
 * @h: pointer to head node
 * Return: total of nodes in list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t total = 0;

	while (h != NULL)
	{
		total++;
		h = h->next;
	}
	return (total);
}
