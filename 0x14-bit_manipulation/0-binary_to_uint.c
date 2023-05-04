#include <stdio.h>

/**
 * binary_to_uint - Convert a binary list to int value
 * @b: Binary value
 *
 * Return: Int value of binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total;
	int length, p;

	if (b == NULL)
		return (0);

	for (length = 0; b[length]; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}

	for (p = 1, total = 0, length--; length >= 0; length--, p *= 2)
	{

		if (b[length] == '1')
		{
			total += p;
		}
	}

	return (total);
}
