#include "main.h"

/**
 * flip_bits - Flip bit to transform number to another
 * @n: Value of number
 * @m: Value of another number
 * Return: The number of bit required to flip number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference;
	int nbits;

	difference = n ^ m;
	nbits = 0;

	while (difference)
	{
		nbits++;
		difference &= (difference - 1);
	}

	return (nbits);
}
