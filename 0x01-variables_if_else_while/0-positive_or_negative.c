#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Take in a number as input
 * print postive if it is greater than zero
 * else, print negative
 * Return: always zero
 * */
	int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return 0;
}
