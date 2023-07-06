#include "main.h"

/**
 * get_endianness - Get endianness
 * Return: 0 is big endian and 1 if not
 */

int get_endianness(void)
{
	unsigned int count = 1;
	char *c = (char *)&count;

	if (*c)
		return (1);
	return (0);
}
