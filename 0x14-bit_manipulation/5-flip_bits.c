#include "main.h"

/**
 * flip_bits - Determine the number of bit need to flip one number to another
 * @first: First number
 * @second: Second number
 * Return: Number of bit needed to flip number
 */

unsigned int flip_bits(unsigned long int first, unsigned long int second)
{
	unsigned int flip_count = 0;
	unsigned int count = 1;

	first ^= second;

	while (first)
	{
		flip_count += first & count;
		first >>= count;
	}

	return (flip_count);
}
