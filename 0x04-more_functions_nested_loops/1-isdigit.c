#include "main.h"

/**
 * _isdigit - checks for a digit (0-9)
 *
 * @c: input
 *
 * Return: 1 if input is a digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
