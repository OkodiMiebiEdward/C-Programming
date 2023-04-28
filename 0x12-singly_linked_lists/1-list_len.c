#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements to be returned
 * @h: the pointer
 * Return: total number of elements in pointer
*/

size_t list_len(const list_t *h)
{
	size_t w = 0;

	while (h)
	{
		w++;
		h = h->next;
	}
	return (w);
}

