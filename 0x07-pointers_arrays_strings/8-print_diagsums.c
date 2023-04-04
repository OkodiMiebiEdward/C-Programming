#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Start position
 * @a: Expecting argument of type pointer
 * @size: Expecting argument of int
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int total1, total2, r;

	total1 = 0;
	total2 = 0;

	for (r = 0; r < size; r++)
	{
		total1 = total1 + a[r * size + r];
	}

	for (r = size - 1; r >= 0; r--)
	{
		total2 += a[r * size + (size - r - 1)];
	}

	printf("%d, %d\n", total1, total2);
}
