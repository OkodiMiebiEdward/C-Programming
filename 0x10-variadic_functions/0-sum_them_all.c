#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of parameters to be returned
 * @n: total number of parameters
 * @...: Changing number of parameters
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lst;
	unsigned int h, total = 0;

	va_start(lst, n);

	for (h = 0; h < n; h++)
		total += va_arg(lst, int);

	va_end(lst);

	return (sum);
}

