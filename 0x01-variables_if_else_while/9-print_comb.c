#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0 ; i <= 9 ; i++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
putchar('$');
return (0);
}
