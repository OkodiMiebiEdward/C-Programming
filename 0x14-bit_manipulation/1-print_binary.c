#include "main.h"

/**
 * print_binary - the binary equivalent
 * @n: the number expected to be printed
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int active;
	int x = 0;
	int out = 0;

	for (x = 63; x >= 0; x--)
	{
		active = n >> x;

		if (active & 1)
		{
			_putchar('1');
			out++;
		}
		else if (out)
			_putchar('0');
	}
	if (!out)
		_putchar('0');
}

