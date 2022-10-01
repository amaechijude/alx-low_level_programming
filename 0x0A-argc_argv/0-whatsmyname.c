#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argv: Array name
 * @argc: Number of command line arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
