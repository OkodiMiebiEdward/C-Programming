#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * *malloc_checked - memory is issued using malloc
 * @b: parameter to take the number of bytes
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *output;

	output = malloc(b);

	if (output == NULL)
		exit(98);

	return (output);
}

