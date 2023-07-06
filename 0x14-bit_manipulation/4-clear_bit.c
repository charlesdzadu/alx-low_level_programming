#include <stdio.h>

/**
 * clear_bit - Set a value of a bit to 0 at a given index
 * @number: Pointer to a number to be changed
 * @i: Index af a bit
 * Return: 1 if Good and -1 if not
 */

int clear_bit(unsigned long int *number, unsigned int i)
{
	unsigned int count = 1;

	if (i > 64)
	{
		return (-1);
	}

	*number &= ~(count << i);

	return (1);
}
