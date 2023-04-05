
#include "main.h"
/**
 * _puts_recursion - The entry point;
 * @s: Receives arguments
 * Return: void returns nothing
 */
void _puts_recursion(char *s)
{
	/*condition to be satisfied*/
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
