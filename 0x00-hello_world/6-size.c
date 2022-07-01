#include <stio.h>
/**
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	int b = 5;
	long int c = 1201302;
        long long int d = 1320012000000;
	float e = 0.21;

	printf("Size of a char: %d byte(s)\n", sizeof(a)); 
	printf("Size of an int: %d byte(s)\n", sizeof(b)); 
	printf("Size of a long int: %d byte(s)\n", sizeof(c) ); 
	printf("Size of a long long int: %d byte(s)\n", sizeof(d); 
	printf("Size of a float: %d byte(s)\n", sizeof(e));
	return (0);	
}
