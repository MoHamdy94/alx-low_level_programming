#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of type of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *sep = "";
	char *str;
	va_list list;

	va_start(list, format);

		while (format[i] && format)
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (str == NULL)
					{
						str = "(nil)";
					}
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	printf("\n");
	va_end(list);
}
