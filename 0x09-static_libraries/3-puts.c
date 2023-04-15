#include "main.h"

/**
 * _puts - function prints string jut like in standard library
 * @str: the string argument
 */
void _puts(char *str)
{
	/*acts like PUTS in library*/
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

