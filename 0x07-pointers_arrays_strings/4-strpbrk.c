#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: will receive string
 * @accept: Argument of pointer explected
 * Return: 0 on successful completion
 */
char *_strpbrk(char *s, char *accept)
{
	int digit;

	while (*s)
	{
	for (digit = 0; accept[digit]; digit++)
	{
	if (*s == accept[digit])
	return (s);
	}
	s++;
	}

	return ('\0');
}

