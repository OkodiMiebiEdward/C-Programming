#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - gets the result of the simple operation
 * @argc: count the argument provided
 * @argv: A pointer array
 * Return: 0 on successful execution
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	/*entry point*/
	int first, second;
	char *output;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	first = atoi(argv[1]);
	output = argv[2];
	second = atoi(argv[3]);

	if (get_op_func(output) == NULL || output[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*output == '/' && second == 0) ||
	    (*output == '%' && second == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(output)(first, second));

	return (0);
}

