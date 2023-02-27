#include "main.h"

/**
 * swap_int - Swap two int
 * @a : first int
 * @b : second int
 * Return :  0 Sucess
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

	return (0);
}
