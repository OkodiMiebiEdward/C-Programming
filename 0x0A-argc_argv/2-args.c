#include "main.h"

/**
 * main - Entry points, prints all entered arguments
 * @argc: number of argument supplied
 * @argv: arguments in array
 *
 * Return: return 0 the quit function
 */
int main(int argc, char *argv[])
{
	int i = 0;
/*checks argc and loop through all contents in argv array*/
	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

