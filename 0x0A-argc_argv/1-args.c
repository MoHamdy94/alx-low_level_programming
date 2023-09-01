#include <stdio.h>

/**
 * main - return number of argumnets
 * @argc: count
 * @argv: value
 * Retrun: 0
 */
int main(int argc, char* argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
