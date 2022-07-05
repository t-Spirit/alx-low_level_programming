#include "main.h"

/**
* print_alphabet - Print the alphabet in lowercase.
*
* Return: void.
*/

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
