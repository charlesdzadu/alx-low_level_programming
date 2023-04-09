#include "main.h"

/**
 * get_endianness - Get networks byte order or host byte order
 * Return: 0 if is big endian or 1 if litte endian
 */

int get_endianness(void)
{
	int number;

	number = 1;
	if (*(char *)&number == 1)
		return (1);
	else
		return (0);
}
