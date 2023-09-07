#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: starting int
 * @max: max int
 * Return: array of integrs
 */

int *array_range(int min, int max)
{
	int lens, i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	lens = max - min + 1;

	ptr = malloc(sizeof(int) * lens);
	
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0 ; min <= max ; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
