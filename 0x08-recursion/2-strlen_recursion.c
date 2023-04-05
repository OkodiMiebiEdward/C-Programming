#include "main.h"
/**
 * _strlen_recursion - function will return the length of a string
 * @s: The string to be passed to the pointer
 *
 * Return: String length is the expected output
 */
int _strlen_recursion(char *s)
{
	int num = 0;

	if (*s)
	{
		num++;
		num += _strlen_recursion(s + 1);
	}

	return (num);
}
