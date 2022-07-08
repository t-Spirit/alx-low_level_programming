#include "main.h"

/**
 * print_numbers - prints numbers from 0-9, followed by a new line.
 *
 * Return: void
 */

void print_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
