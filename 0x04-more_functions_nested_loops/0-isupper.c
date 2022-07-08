#include "main.h"

/**
 * _isupper - checks if the input character is uppercase
 *
 * @c: input
 *
 * Return: 1 if input is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
