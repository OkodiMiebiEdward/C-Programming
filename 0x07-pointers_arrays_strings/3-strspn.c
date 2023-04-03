#include "main.h"
/**
 * _strspn - The function with two parametes
 * @s: Take values
 * @accept: parameter expecting a value
 * Return: suceess on 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num_1 = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				num_1++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (num_1);
		}
		s++;
	}
	return (num_1);
}
