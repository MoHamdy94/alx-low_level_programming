#include "lists.h"
/**
 * _strlen - return the length of a string
 * @i: the string to measure
 * Return: len of a string
 */
int _strlen(char *i)
{
	int k = 0;

	if (!i)
		return (0);
	while (*i++)
		k++;
	return (k);
}
/**
 * print_list - prints all the elemets of a linked list
 * @h: pointers to the lists_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		s++;
	}
	return (s);
}
