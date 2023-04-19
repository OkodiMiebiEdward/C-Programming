#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>


/**
 * print_name - gets the name using a pointer to a function
 * @name: the name argument, expecting a string
 * @f: the pointer to a function
 * Return: void returns nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;

	f(name);
}

