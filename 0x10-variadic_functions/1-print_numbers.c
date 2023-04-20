#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints given numbers that is then followed by a new line
 * @separator: The string argument expected to be a separator
 * @n: total number of integers passed
 * @...: changing numbers to be provided
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	/*funcrion prints numbers using variadic function*/
	va_list w;
	unsigned int t = 0;

	va_start(w, n);

	for (; t < n; t++)
	{
		printf("%d", va_arg(w, int));

		if (t != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(w);
}

