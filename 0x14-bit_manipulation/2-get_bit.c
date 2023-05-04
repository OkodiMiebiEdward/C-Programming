#include "main.h"

/**
 * get_bit - value of bit returned at a particular index position
 * @n: the expected number
 * @index: the index
 * Return: an integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int rqs = 0;
	/*bit returned at an index*/

	if (index > 63)
		return (1);

	rqs = (n >> index) & 1;

	return (rqs);
}

