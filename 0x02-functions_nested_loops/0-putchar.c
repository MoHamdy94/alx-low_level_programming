#include "main.h"
/**
 * main - print _putchar
 * Return: 0
 */
int main(void)
{
char ptc[] = "_putchar";
int ch;
for (ch = 0; ch < 8 ; ch++)
{
_putchar(ptc[ch]);
}
_putchar('\n');
return (0);
}
