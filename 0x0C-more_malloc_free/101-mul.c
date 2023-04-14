#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#define ERR_MSG "Error"

/**
 * checker - performs check
 * @s: random string
 *
 * Return: 0 or 1 otherwise
 */
int checker(char *s)
{
	int p = 0;

	while (s[p])
	{
		if (s[p] < '0' || s[p] > '9')
			return (0);
		p++;
	}
	return (1);
}

/**
 * checkLength - length of string
 * @s: evaluated string
 *
 * Return: expected length of string
 */
int checkLength(char *s)
{
	int w = 0;

	while (s[w] != '\0')
	{
		w++;
	}
	return (w);
}

/**
 * isValid - check errors
 * Return: void
 */
void isValid(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - perform multiplication
 * @argc: count arguments
 * @argv: the array of argument
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *stringA, *stringB;
	int length1, length2, x, i, carry, digit1, digit2, *result, a = 0;

	stringA = argv[1], stringB = argv[2];
	if (argc != 3 || !checker(stringA) || !checker(stringB))
		isValid();
	length1 = checkLength(stringA);
	length2 = checkLength(stringB);
	x = length1 + length2 + 1;
	result = malloc(sizeof(int) * x);
	if (!result)
		return (1);
	for (i = 0; i <= length1 + length2; i++)
		result[i] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		digit1 = stringA[length1] - '0';
		carry = 0;
		for (length2 = checkLength(stringB) - 1; length2 >= 0; length2--)
		{
			digit2 = stringB[length2] - '0';
			carry += result[length1 + length2 + 1] + (digit1 * digit2);
			result[length1 + length2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[length1 + length2 + 1] += carry;
	}
	for (i = 0; i < x - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

