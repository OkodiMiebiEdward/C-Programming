#include "main.h"

/**
 * main - minimum number of coins
 * @argc: number of arguments to be passed
 * @argv: array of arguments
 *
 * Return: 0 on successful completion
 */
int main(int argc, char *argv[])
{
	int val;
	int q;
	int result;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	val = atoi(argv[1]);
	result = 0;

	if (val < 0)
	{
		printf("0\n");
		return (0);
	}

	for (q = 0; q < 5 && val >= 0; q++)
	{
		while (val >= coins[q])
		{
			result++;
			val -= coins[q];
		}
	}

	printf("%d\n", result);
	return (0);
}

