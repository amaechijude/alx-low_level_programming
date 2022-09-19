#include "main.h"
/**
 * main - prints number that swaps the value of two integer
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 * Return 0 for success
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
