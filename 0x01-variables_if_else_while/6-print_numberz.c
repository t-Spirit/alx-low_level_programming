#include <stdio.h>
/* more headers goes here */

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */

int main(void)
{
	char i;

	i = '0';

	while (i < '10')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
