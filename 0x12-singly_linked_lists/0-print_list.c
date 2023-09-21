#include "lists.h"
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
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i]%s\n", h->len, h->str);
			h = h->next;
			s++;
		}
	}
	return (s);
}
