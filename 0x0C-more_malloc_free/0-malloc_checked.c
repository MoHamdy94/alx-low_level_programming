#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocate memory using malloc and exit if failed
 * @b: int
 * Return: 98
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
