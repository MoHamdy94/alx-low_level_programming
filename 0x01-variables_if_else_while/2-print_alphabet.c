#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar("%c", ch);
ch++;
}
return(0);
}
