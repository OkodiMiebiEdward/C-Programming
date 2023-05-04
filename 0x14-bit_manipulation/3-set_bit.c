#include "main.h"

/**
 * set_bit - sets bits
 * @n: the changing number pointer
 * @index: the index of the bit to be set
 * Return: on succes 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

