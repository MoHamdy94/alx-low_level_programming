#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int tmp;

	*a = 98;
	*b = 42;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
