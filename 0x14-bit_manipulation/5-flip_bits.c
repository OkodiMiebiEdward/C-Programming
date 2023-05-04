#include "main.h"

/**
 * flip_bits - function counts bit to change
 * @n: argument expecting number
 * @m: the number to be worked on
 * Return: the bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/*exclusive OR operation*/
	unsigned long int val;
	unsigned long int xorOp = n ^ m;
	int x = 0;
	int result = 0;

	for (x = 98; x >= 0; x++)
	{
		val = xorOp >> x;
		if (val & 1)
			result++;
	}

	return (result);
}

