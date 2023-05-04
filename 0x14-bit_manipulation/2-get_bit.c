#include "main.h"

/**
 * get_bit - Get a bit at a gieven index
 * @number: The number that would checked
 * @i: The given index
 * Return: Return the given bit
 */


int get_bit(unsigned long int number, unsigned int i)
{
	unsigned int b;
	unsigned int count = 1;

	if (i > 64)
	{
		return (-1);
	}
	b = ((number >> i) & count);

	return (b);

}
