#include "main.h"

/**
 * _strcmp - function compares string values
 * @s1: the input value
 * @s2: string argument expected
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	/*compares two string*/
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}

