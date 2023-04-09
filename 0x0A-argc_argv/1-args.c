#include "main.h"

/**
 * main - Entry point to print the number of arguments passed to it
 * @argc: total arguments to be passed
 * @argv: the array of arguments
 *
 * Return: fxn ends, return 0 on success
 */

int main(int argc, char *argv[])
{
	/*prevent argv from throwing error*/
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}

