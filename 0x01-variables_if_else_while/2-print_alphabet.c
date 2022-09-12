#include <stdio.h>
/**
 * main - Print out the alphabets in lowercase
 * Return: 0 if no error is present
 * else return a positive
 */
int main(void)
{
	char c;

	for (c ='a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
