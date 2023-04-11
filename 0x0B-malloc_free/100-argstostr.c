#include "main.h"
#include <stdlib.h>

/**
 * argstostr - The entry point
 * @ac: parameter to accept value
 * @av: pointer to pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int f, s, k = 0, m = 0;
	char *dstring;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (f = 0; f < ac; f++)
	{
		for (s = 0; av[f][s]; s++)
			m++;
	}
	m += ac;

	dstring = malloc(sizeof(char) * m + 1);
	if (dstring == NULL)
		return (NULL);
	for (f = 0; f < ac; f++)
	{
	for (s = 0; av[f][s]; s++)
	{
		dstring[k] = av[f][s];
		k++;
	}
	if (dstring[k] == '\0')
	{
		dstring[k++] = '\n';
	}
	}
	return (dstring);
}

