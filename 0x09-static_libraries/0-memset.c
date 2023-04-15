#include "main.h"

/**
 * _memset - checks block of memory
 * @s: start address
 * @b: the expected value
 * @n: number of bytes to be changed
 *
 * Return: array with expected bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}


