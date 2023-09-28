#include "main.h"

/**
 * clear_bit - sets a value of a bit to zero
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 * Return: 1 for success, 0 for faliure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) &  *n);
	return (1);
}
