#include "main.h"

/**
 * print_binary - convert from dicimal to binary
 * @n: dicimal
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int value;
	int i;
	int count = 0;

	for (i = 63 ; i >= 0 ; i--)
	{
		value = n >> i;

		if (value & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
