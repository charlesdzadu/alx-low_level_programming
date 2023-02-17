#include <stdio.h>
#include <stdlib.h>
#include <time>

/**
 * main - Entry level
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative", n);
	} else if (n > 0)
	{
		printf("%d is positive", n);
	} else
	{
		printf("%d is zero", n);
	}

	return (0);
}
