#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * check_num - check for digit
 * @str: array str
 *
 * Return: 0 on successful completion
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))

	{
		if (!isdigit(str[count]))
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Prints name
 * @argc: Counts arguments
 * @argv: array
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])

{
	int occur;
	int str_to_int;
	int sum = 0;

	occur = 1;
	while (occur < argc)
	{
		if (check_num(argv[occur]))

		{
			str_to_int = atoi(argv[occur]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		occur++;
	}

	printf("%d\n", sum);

	return (0);
}

