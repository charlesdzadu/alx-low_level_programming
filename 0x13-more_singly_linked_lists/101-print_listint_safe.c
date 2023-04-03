#include "lists.h"
/**
 * print_listint_safe - Printed all node in linked list (safe version)
 * @head: Head of linked list
 * Return: Counter of element in linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *head1 = NULL;
	const listint_t *head2 = NULL;
	size_t n = 0;
	size_t node;

	head1 = head;
	while (head1)
	{
		printf("[%p] %d\n", (void *)head1, head1->n);
		n++;
		head1 = head1->next;
		head2 = head;
		node = 0;
		while (node < n)
		{
			if (head1 == head2)
			{
				printf("-> [%p] %d\n", (void *)head1, head1->n);
				return (n);
			}
			head2 = head2->next;
			node;
		}
		if (!head)
			exit(98);
	}
	return (n);
}
