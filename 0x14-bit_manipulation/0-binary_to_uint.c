#include "main.h"

/**
 * binary_to_uint - fxn converts binary number to integer
 * @b: String argument expected
 * Return: the result after the conversion
 */

unsigned int binary_to_uint(const char *b)
{
	/*binary conversion*/
	int w = 0;
	unsigned int num = 0;

	if (!b)
		return (0);

	for (; b[w]; w++)
	{
		if (b[w] < '0' || b[w] > '1')
			return (0);
		num = 2 * num + (b[w] - '0');
	}

	return (num);
}

