#include <stdio.h>
/* more heaers goes there */

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

/* betty style doc for function main goes there */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	return (0);
}

