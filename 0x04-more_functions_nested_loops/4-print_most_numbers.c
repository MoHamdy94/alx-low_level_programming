#include "main.h"
/**
 * print_most_numbers - checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int i;
for (i = 48 ; i < 58 ; i++)
{
if (i == 2 && i == 4)
{
i++;
}
_putchar(i);
}
_putchar('\n');
}
