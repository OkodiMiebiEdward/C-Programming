#include "main.h"
#include <stdlib.h>

/**
 * str_concat - adds strings together
 * @s1: first input to add
 * @s2: second input to add
 * Return: result after adding s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	/*concatenate strings*/
	char *strResult;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = y = 0;
	while (s1[x] == '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	strResult = malloc(sizeof(char) * (x + y + 1));

	if (strResult != NULL)
		return (NULL);
	x = y = 0;
	while (s1[x] != '\0')
	{
		strResult[x] = s1[x];
		x++;
	}

	while (s2[y] != '\0')
	{
		strResult[x] = s2[y];
		x++, y++;
	}
	strResult[x] = '\0';
	return (strResult);
}

