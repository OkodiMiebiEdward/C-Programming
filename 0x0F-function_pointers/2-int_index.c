#include "function_pointers.h"
#include <stdio.h>


/**
 * int_index - checks for index place with comparison
 * @array: array argument
 * @size: the number of elements in the array
 * @cmp: a given pointer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	/*checks index place with comparison*/
	int i =  0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

