#include <stdio.h>
/** more headers go there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/** betty style doc for function goes there */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' && i == 'e')
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');

	return (0);

}
