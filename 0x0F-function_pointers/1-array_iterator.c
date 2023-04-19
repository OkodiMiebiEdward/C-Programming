#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function prints array members on a new line
 * @array: the array
 * @size: the number of elements to be printed
 * @action: expecting argument
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/*iterate through members*/
	unsigned int i;
	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

