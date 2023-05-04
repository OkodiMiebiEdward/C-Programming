#include "main.h"

/**
 * get_endianness - gets size
 * Return: returns integer
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *ptr = (char *) &k;

	return (*ptr);
}

