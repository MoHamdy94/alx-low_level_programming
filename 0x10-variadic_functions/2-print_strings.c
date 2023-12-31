#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed
 * @...: variable number of strings
 *
 * Description: if separator is NULL, it is not printed
 * if one of the strings is NULL, (nil) is printed instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vali;
	char *str;

	va_start(vali, n);

	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(vali, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(vali);
}
