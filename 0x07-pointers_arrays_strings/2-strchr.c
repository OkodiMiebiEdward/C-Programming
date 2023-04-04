#include "main.h"

/**
 * _strchr - Start position
 * @s: Receives a string
 * @c: Receives a character
 * Return: Success return 0
*/


char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
