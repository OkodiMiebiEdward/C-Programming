#include "main.h"

/**
 * main - Entry point, will print the results of multiplication
 * @argc: Exact number of arguments
 * @argv: The array of arguments
 * Return: Return 0 the end program
 */
int main(int argc, char *argv[])
{
	int answer, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	answer = num1 * num2;

	printf("%d\n", answer);

	return (0);
}

