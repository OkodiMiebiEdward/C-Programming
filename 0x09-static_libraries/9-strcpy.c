#include "main.h"

/**
 * char *_strcpy - function returns string
 * @dest: the destination
 * @src: the source
 * Return: a string is returned
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

