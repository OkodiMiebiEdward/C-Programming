#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - make double the memory location
 * @str: parameter
 * Return: caharacter to be returned
 */
char *_strdup(char *str)
{
	char *charac;
	int x = 0;
	int y = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	charac = malloc(sizeof(char) * (x + 1));

	if (charac == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		charac[y] = str[y];

	return (charac);
}

