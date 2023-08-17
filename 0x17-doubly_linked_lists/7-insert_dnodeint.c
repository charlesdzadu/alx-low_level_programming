#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at a specific index
 * @h: pointer to head
 * @idx: index of the list where the new node
 * @n: data of the new node
 * Return: address of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_n = (dlistint_t *) malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *h;
	dlistint_t *tmp2 = *h;
	unsigned int i = 1;

	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	if (*h == NULL)
	{
		new_n->next = NULL;
		new_n->prev = NULL;
		*h = new_n;
		return (new_n);
	}
	if (idx == 0)
	{
		new_n = add_dnodeint(h, n);
		return (new_n);
	}
	while (i <= idx)
	{
		if (tmp->next == NULL)
		{
			if (i == idx)
			{
				new_n = add_dnodeint_end(h, n);
				return (new_n);
			}
			else
				return (NULL);
		}
		tmp = tmp->next;
		i++;
	}
	new_n->next = tmp;
	new_n->prev = tmp->prev;
	tmp2 = tmp->prev;
	tmp2->next = new_n;
	tmp->prev = new_n;
	return (new_n);
}
