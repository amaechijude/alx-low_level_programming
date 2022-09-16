#include "main.h"
#include <stdio.h>

/**
 * main - to check uf a character is uppercase
 * @c checks function input
 * Return 1 if yes, otherwise return 
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
