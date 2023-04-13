#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * *string_nconcat - joins two strings together
 * @s1: expecting string argument to be appended
 * @s2: the second string argument
 * @n: the number of bytes to the concatenated
 * Return: a pointer to be returned
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        char *result;
        unsigned int x = 0, y = 0, stringA = 0, stringB = 0;

        while (s1 && s1[stringA])
                stringA++;
        while (s2 && s2[stringB])
                stringB++;

        if (n < stringB)
                result = malloc(sizeof(char) * (stringA + n + 1));
        else
                result = malloc(sizeof(char) * (stringA + stringB + 1));

        if (!result)
                return (NULL);

        while (x < stringA)
        {
                result[x] = s1[x];
                x++;
        }

        while (n < stringB && x < (stringA + n))
                result[x++] = s2[y++];

        while (n >= stringB && x < (stringA + stringB))
                result[x++] = s2[y++];

        result[x] = '\0';

        return (result);
}

