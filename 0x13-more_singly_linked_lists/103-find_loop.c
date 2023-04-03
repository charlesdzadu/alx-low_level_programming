#include "lists.h"

/**
 * find_listint_loop - Find loop
 * @head: Head of a linked list
 *
 * Return: The node from loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *head1 = head;
	listint_t *head2 = head;

	if (!head)
		return (NULL);

	while (head1 && head2 && head2->next)
	{
		head2 = head2->next->next;
		head1 = head1->next;
		if (head1 == head2)
		{
			head1 = head2;
			while (head1 != head2)
			{
				head1 = head1->next;
				head2 = head2->next;
			}
			return (head2);
		}
	}

	return (NULL);
}
