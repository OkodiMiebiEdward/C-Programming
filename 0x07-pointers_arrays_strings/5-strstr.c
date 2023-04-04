#include "main.h"
/**
 * _strstr - Starting postion
 * @haystack: Enter values (pointers)
 * @needle: Enter pointer values
 * Return: 0 is positive
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *n = needle;

		while (*m == *n && *n != '\0')
		{
			m++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return (0);
}
