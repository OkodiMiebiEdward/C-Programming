#include "main.h"

/**
 * _isupper - checks for upper case letters
 * @c: The character to check
 *
 * Return: 0 on success , 1 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

