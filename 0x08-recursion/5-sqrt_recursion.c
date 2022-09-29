#include "main.h"

/**
 * helper - Helps to decide right or wrong.
 * @i: integer to guess
 * @n: integer to get root of
 * Return: value of root
 */

int helper(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		j = helper(i + 1, n);
		return (j + 1);
	}
	return (0);
}

/**
 * _sqrt_recursion - Finds the square root of a numner.
 * @n: The number whose square root would be found.
 * @root: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 * 	If the number does not have a natural square root - -1.
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (helper(i, n) == n && n != 1)
		return (-1);
	return (helper(i, n));
}
