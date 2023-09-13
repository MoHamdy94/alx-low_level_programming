#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the string name
 * @f: function that prints charater
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
