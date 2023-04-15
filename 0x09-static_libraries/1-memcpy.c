#include "main.h"
/**
 *_memcpy - This fxn copies memory area
 *@dest: storage memory
 *@src: source where copying is done
 *@n: total number of bytes
 *
 *Return: memory with n bytes affected
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int num1 = 0;
	int num2 = n;

	for (; num1 < num2; num1++)
	{
		dest[num1] = src[num1];
		n--;
	}
	return (dest);
}
