#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - comes before main entry point
 */
void first(void)
{
	/*printed before main*/
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

