#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <limits.h>


/**
 * *_realloc - memory block reallocation
 * @ptr: the pointer to a memory block
 * @old_size: the size of the allocated block
 * @new_size: the new size of memory block
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/*working with realloc*/
	char *output;
	char *val;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	output = malloc(new_size);
	if (!output)
		return (NULL);

	val = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			output[i] = val[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			output[i] = val[i];
	}

	free(ptr);
	return (output);
}

