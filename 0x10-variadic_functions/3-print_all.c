#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints something provided
 * @format: The types of argument that has been passed
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int m = 0;
	char *len, *nft = "";

	va_list con;

	va_start(con, format);

	if (format)
	{
		while (format[m])
		{
			switch (format[m])
			{
				case 'c':
					printf("%s%c", nft, va_arg(con, int));
					break;
				case 'i':
					printf("%s%d", nft, va_arg(con, int));
					break;
				case 'f':
					printf("%s%f", nft, va_arg(con, double));
					break;
				case 's':
					len = va_arg(con, char *);
					if (!len)
						len = "(nil)";
					printf("%s%s", nft, len);
					break;
				default:
					m++;
					continue;
			}
			nft = ", ";
			m++;
		}
	}

	printf("\n");
	va_end(con);
}

