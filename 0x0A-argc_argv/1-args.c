#include <stdio.h>

/**
 * main - print number of argumnets passed
 * @argc: number of command line arrgumnet
 * @argv: pointer to an array of command line argument
 * Return: 0 succes
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
