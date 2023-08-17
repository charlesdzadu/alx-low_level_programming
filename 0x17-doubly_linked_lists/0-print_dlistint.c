#include "lists.h"

/**
 * print_dlistint - Prints element in a list
 * @h: pointer to head
 * Return: total of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t total = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		total++;
		h = h->next;
	}
	return (total);
}
