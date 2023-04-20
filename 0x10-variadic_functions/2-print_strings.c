#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints the provided strings followed by a new line
 * @separator: seperator string to be placed between them
 * @n: total strings passed to the function
 * @...: Non constant number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	/*prints given strings*/
	va_list totalStrings;
	char *nsrp;
	unsigned int q = 0;

	va_start(totalStrings, n);

	for (; q < n; q++)
	{
		nsrp = va_arg(totalStrings, char *);

		if (nsrp == NULL)
			printf("(nil)");
		else
			printf("%s", nsrp);
		if (q != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(totalStrings);
}

