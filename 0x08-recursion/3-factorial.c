#include "main.h"

/**
 * factorial - factorial of the number is returned
 * @n: number
 *
 * Return: The factorial of n is required
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

