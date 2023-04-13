#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * *_memset - allocates a constant byte to memory
 * @s: the specific area to be filled
 * @b: the exact character to copy
 * @n: total number of times to copy
 *
 * Return: a pointer is returned
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		s[p] = b;
	}

	return (s);
}

/**
 * *_calloc - gives array memeory
 * @nmemb: total number of content in array
 * @size: expecting a specific size
 * Return: a void is returned
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*implementing calloc*/
	char *val;

	if (nmemb == 0 || size == 0)
		return (NULL);

	val = malloc(size * nmemb);

	if (val == NULL)
		return (NULL);

	_memset(val, 0, nmemb * size);

	return (val);
}

