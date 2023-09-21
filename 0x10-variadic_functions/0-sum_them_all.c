#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - get the sum of int
 * @n: the number of paramaters
 * @...: variable number of paramters to calculate
 *
 * Return: if n == 0 - 0
 * otherwise - the sum of all paramters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list vali;

	va_start(vali, n);
	for (i = 0 ; i < n ; i++)
		sum += va_arg(vali, int);

	va_end(vali);

	return (sum);
}
