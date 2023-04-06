#include "main.h"

/**
 * wildcmp -fxn compares given strings
 * @s1: parameter to receive string
 * @s2: String argument to be passsed to s2
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	/*condition statement for validation*/
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
