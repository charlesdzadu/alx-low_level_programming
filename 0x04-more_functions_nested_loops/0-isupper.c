#include "main.h"

/**
 * _isupper - Determine if @c is uppercase
 * @c: Character that would be checked
 *
 * Return: 1 is @c is uppercase and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
