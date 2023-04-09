#include "main.h"

/**
 * get_bit - Get bit
 * @n: value of int
 * @index: index to search for
 * Return: Value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp;

	if (index > 64)
		return (-1);

	tmp = n >> index;

	return (tmp & 1);
}
