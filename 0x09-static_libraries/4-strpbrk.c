#include "main.h"

/**
 * _strpbrk - The start position
 * @s: first input
 * @accept: second input
 * Return: 0 on success
 */
char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
		if (*s == accept[m])
		return (s);
		}
	s++;
	}

return ('\0');
}

