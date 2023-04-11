#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array and assign a character
 * @size: The exact size of the array
 * @c: The character to be assigned
 * Description: array creation
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *dstring;
	unsigned int r;

	dstring = malloc(sizeof(char) * size);
	if (size == 0 || dstring == NULL)
		return (0);

	for (r = 0; r < size; r++)
		dstring[r] = c;
	return (dstring);
}

