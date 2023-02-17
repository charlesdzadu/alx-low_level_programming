#include <stdio.h>

/**
 * main - Entry level
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int begin = 97;
	int last = begin + 26;

	while (begin < last)
	{
		putchar(begin);
		begin++;
	}
	putchar(10);
	return (0);
}
