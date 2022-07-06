#include "main.h"

/**
 * main - print_alphabet
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
