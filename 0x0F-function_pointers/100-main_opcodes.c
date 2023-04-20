#include <stdio.h>
#include <stdlib.h>

/**
 * main - gets opcodes
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on successful completion
 */
int main(int argc, char *argv[])
{
	/*gets operation code of entry point*/
	int mem, q;
	char *result;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	mem = atoi(argv[1]);

	if (mem < 0)
	{
		printf("Error\n");
		exit(2);
	}

	result = (char *)main;

	for (q = 0; q < mem; q++)
	{
		if (q == mem - 1)
		{
			printf("%02hhx\n", result[q]);
			break;
		}
		printf("%02hhx ", result[q]);
	}
	return (0);
}

