#include "main.h"

/* more headers goes there */

/**
 * print_alphabet - Print_alphabet
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
