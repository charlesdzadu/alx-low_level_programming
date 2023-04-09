#include "main.h"

/**
 * set_bit - Set bit at given index
 * @n: Pointer to a value of integer
 * @index: Given index
 * Return: 1 if worked -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp;

	if (index > 64)
		return (-1);

	for (tmp = 1; index > 0; index--, tmp *= 2)
		;
	*n += tmp;

	return (1);
}
