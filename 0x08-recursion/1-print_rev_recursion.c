#include "main.h"
/**
 * _print_rev_recursion - fxn will print a string in reverse
 * @s: Argument wil be passed to the pointer
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	/*code will run if condition is passed*/
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
