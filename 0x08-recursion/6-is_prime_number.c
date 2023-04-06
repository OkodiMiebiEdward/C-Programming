#include "main.h"

int _prime(int n, int i);

/**
 * is_prime_number - checks if number is an integer
 * @n: expected number to be evaluated
 *
 * Return: 1 for true, 0 false other wise
 */
int is_prime_number(int n)
{
	/*checks condition*/
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
 * _prime - check if a number is prime recursively
 * @n: number to evaluate
 * @i: moved to this specific number of times
 *
 * Return: 1 if n is prime, 0 else
 */
int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime(n, i - 1));
}
