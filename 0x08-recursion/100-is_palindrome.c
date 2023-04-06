#include "main.h"

int doWork(char *s, int i, int len);
int recursiveStringLen(char *s);

/**
 * is_palindrome - is string palindrome
 * @s: expected string to reverse
 *
 * Return: 1 if possible, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (doWork(s, 0, recursiveStringLen(s)));
}

/**
 * recursiveStringLen - returns string length
 * @s: collection of characters whose length is used
 *
 * Return: string length
 */
int recursiveStringLen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + recursiveStringLen(s + 1));
}

/**
 * doWork -  recursively checks characters  for palindrome
 * @s: to be checked string
 * @i: move this amount of time
 * @len: length of the string
 *
 * Return: 1 if success, 0 otherwise
 */
int doWork(char *s, int i, int len)
{
	if (*(s + i) == *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (doWork(s, i + 1, len - 1));
}
