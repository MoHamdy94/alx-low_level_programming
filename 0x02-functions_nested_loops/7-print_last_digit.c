#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int lD;
if (n < 0)
{
lD = -1 * (n % 10);
}
else
{
lD = n % 10;
}
_putchar(lD + '0');
return (lD);
}
