#include "lists.h"

/**
 * find_listint_loop - Find loop
 * @head: Head of a linked list
 *
 * Return: The node from loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *head1;
	listint_t *prev;

	head1 = head;
	prev = head;
	while (head && head1 && head1->next)
	{
		head = head->next;
		head1 = head1->next->next;

		if (head == head1)
		{
			head = prev;
			prev =  head1;
			while (1)
			{
				head1 = prev;
				while (head1->next != head && head1->next != prev)
				{
					head1 = head1->next;
				}
				if (head1->next == head)
					break;

				head = head->next;
			}
			return (head1->next);
		}
	}

	return (NULL);
}
