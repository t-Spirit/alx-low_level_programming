#include "main.h"

/**
* print_alphabet - Print alphabet lowercase.
*
* Return: void.
*/

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
