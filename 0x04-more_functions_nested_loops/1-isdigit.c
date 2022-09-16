#include "main.h"
#include <stdio.h>
/**
 * _isdigit - Checks for a digit (0-9)
 * @c is the number to be checked
 * Retur 1 if c is digit
 * 	else return 
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
