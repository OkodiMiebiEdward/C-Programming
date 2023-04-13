#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * *array_range - uses a set of numbers to create an array
 * @min: argument expected to be smaller than max
 * @max: the maximum set of numbers
 * Return: a pointer
 */
int *array_range(int min, int max)
{
	/*gets sets of numbers and make as array*/
	int *result;
	int t = 0;
	int actualValue;

	if (min > max)
		return (NULL);

	actualValue = max - min + 1;

	result = malloc(sizeof(int) * actualValue);

	if (result == NULL)
		return (NULL);

	for (; min <= max; t++)
		result[t] = min++;

	return (result);
}

