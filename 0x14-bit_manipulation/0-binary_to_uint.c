#include "main.h"

/**
 * binary_to_uint - Convert a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1
 * Return: value of binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int t, p;
	int length;

	if (b == NULL)
		return (0);

	for (length = 0; b[length]; length++)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}
	}

	for (p = 1, t = 0, length--; length >= 0; length--, p *= 2)
	{
		if (b[length] == '1')
			t += p;
	}

	return (t);
}
