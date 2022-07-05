#include <stdio.h>
#include "main.h"

/* more headers goes there */

/**
 * main - Print alphabets
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for funciton main goes there */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z', i++)
	{
		putchar(i);
	}
	putchar('\n');
}
