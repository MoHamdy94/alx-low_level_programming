#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int count;
	int i;

	while (*s != '\0')
{
	count++;
	s++;
}
	s--;
	for (i = count ; i > 0 ; i--)
{
	_putchar(*s);
	s--;
}
	_putchar('\n');
}
