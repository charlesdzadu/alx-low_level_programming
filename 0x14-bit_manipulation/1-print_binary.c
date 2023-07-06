#include "main.h"

/**
 * print_binary - Print a binary for a given number
 * @number: int that would be convert to binary
 */

void print_binary(unsigned long int number)
{
	unsigned int count = 1;

	if (number > 1)
	{
		print_binary(number >> count);
	}
	_putchar((number & count) + '0');
}
