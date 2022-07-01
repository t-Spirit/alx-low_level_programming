#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
 
int main(void)
{
	char achar = 'b';
	int bint = 10;
	long int clong = 1475412;
        long long int dlonglong = 100013201;
	float efloat = 2.01;

	printf("Size of a char: %d byte(s)\n", sizeof(achar)); 
	printf("Size of an int: %d byte(s)\n", sizeof(bint)); 
	printf("Size of a long int: %d byte(s)\n", sizeof(clong)); 
	printf("Size of a long long int: %d byte(s)\n", sizeof(dlonglong)); 
	printf("Size of a float: %d byte(s)\n", sizeof(efloat));
	return (0);	
}
