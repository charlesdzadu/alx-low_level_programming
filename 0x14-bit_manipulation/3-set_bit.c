#include "main.h"

/**
 * set_bit - Set a value of a bit to 1 at a given index for a number
 * @number: Given number
 * @i: Given index
 * Return: 1 if everything worked and -1 if not
 */

int set_bit(unsigned long int *number, unsigned int i)
{
	unsigned int count = 1;

	if (i > 64)
	{
		return (-1);
	}

	*number ^= (count << i);

	return (1);
}
