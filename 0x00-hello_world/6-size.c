#include <stdio.h>
/*
 * main - Prints the size of various types based on
 * 	the computer it is compiled and run on..
 *
 * Returns = 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %ld byte(s)\n", sizeof(a));
	printf("size of an int: %ld byte(s)\n", sizeof(b));
	printf("size of a long int: %ld byte(s)\n", sizeof(c));
	printf("size of a long long int: %ld byte(s)\n", sizeof(d));
	printf("size of a float: %ld byte(s)\n", sizeof(e));

	retur (0);
}
