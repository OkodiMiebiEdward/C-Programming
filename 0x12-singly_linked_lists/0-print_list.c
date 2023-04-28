#include "list.h"
#include <stdio.h>

/**
 * print_list - elements of linked list to be printed
 * @h: a given pointer
 * Return: nodes to be printed
 */

size_t print_list(const list_t *h)
{
	size_t y;

	while ((*h))
	{
		y = 0;
		if (!(*h).str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		y++;
	}

	return (y);
}


