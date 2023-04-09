#include "main.h"

/**
 * clear_bit - Replace bit with 0 at a given index
 * @n: Pointer to a value of int
 * @index: Given index
 * Return: 1 if worked and -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;
	unsigned int tmp;

	if (index > 64)
		return (-1);
	tmp = index;
	for (x = 1; tmp > 0; x *= 2, tmp--)
		;

	if ((*n >> index) & 1)
		*n -= x;

	return (1);
}
