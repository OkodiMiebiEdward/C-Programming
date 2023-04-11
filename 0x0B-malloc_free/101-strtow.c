#include <stdlib.h>
#include "main.h"

/**
 * checker -count number of words
 * @s: string value as argument
 *
 * Return: count number of words
 */
int checker(char *s)
{
	int q, p, x;

	q = 0;
	x = 0;

	for (p = 0; s[p] != '\0'; p++)
	{
		if (s[p] == ' ')
			q = 0;
		else if (q == 0)
		{
			q = 1;
			x++;
		}
	}

	return (x);
}

/**
 * **strtow - seperate strings
 * @str: the string to be splited
 * Return: pointer on success, else null
 */
char **strtow(char *str)
{
	/*splits two words*/
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = checker(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}

