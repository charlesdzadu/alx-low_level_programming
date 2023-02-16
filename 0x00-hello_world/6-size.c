#include <stdio.h>

/**
 * main - Entry point
 *
 * Get size of variables
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 'C';
	int it = 24;
	long lit = 45;
	float flt = 4.6;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(it));
	printf("Size of a long int: %lu byte(s)\n", sizeof(lit));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lit));
	printf("Size of a float: %lu byte(s)\n", sizeof(flt));

	return (0);
}
