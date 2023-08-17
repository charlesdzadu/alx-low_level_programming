#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete the node at index
 * @head: pointer to head
 * @index: index of node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *t2 = *head;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (tmp->next == NULL)
		{
			free(tmp);
			*head = NULL;
			return (1);
		}
		tmp = tmp->next;
		tmp->prev = NULL;
		free(*head);
		*head = tmp;
		return (1);
	}
	while (i <= index)
	{
		if (tmp->next == NULL)
		{
			if (i == index)
			{
				t2 = tmp->prev;
				t2->next = NULL;
				free(tmp);
				return (1);
			}
			else
				return (-1);
		}
		tmp = tmp->next;
		i++;
	}
	t2 = tmp->prev;
	t2->next = tmp->next;
	t2 = tmp->next;
	t2->prev = tmp->prev;
	free(tmp);
	return (1);
}
