#include "main.h"

/**
 * _sqrt_recursion - returns the square root of number
 * @n: number whose square root will be looked at
 *
 * Return: answer no be returned
 */

int original_recursion_sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (original_recursion_sqrt(n, 0));
}


/**
 * original_recursion_sqrt -  find the number recursively
 * 
 * @n: number whose square root is to be fetched
 * @i: number of times to be moved
 *
 * Return: Actual square root
 */
int original_recursion_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (original_recursion_sqrt(n, i + 1));
}
