#include "main.h"

/**
 * print_binary - Print a binary version of integer
 * @n: Integer to print to console
 */

void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int sht;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tmp = n, sht = 0; (tmp >>= 1) > 0; sht++)
		;

	for (; sht >= 0; sht--)
	{
		if ((n >> sht) & 1)
			printf("1");
		else
			printf("0");
	}
}
