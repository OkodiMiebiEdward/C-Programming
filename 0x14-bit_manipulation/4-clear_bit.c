#include "main.h"

/**
 * clear_bit - transform value of given bit
 * @n: the pointer
 * @index: index to be changed
 * Return: 1 for success, -1 else
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/*use bitwise NOT to get compliment*/
	if (index > 64)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

