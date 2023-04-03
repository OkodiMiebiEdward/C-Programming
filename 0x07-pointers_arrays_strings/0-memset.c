#include "main.h"


/**
 * _memset - completes memory with a certain value
 * @s: initial position of memory
 * @b:  resultant value
 * @n: total number of bytes
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int num = 0;

	for (; n > 0; num++)
	{
		s[num] = b;
		n--;
	}
	return (s);
}
