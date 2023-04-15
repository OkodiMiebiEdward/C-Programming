#include "main.h"

/**
 * _isalpha - function checks for alphabetic character
 * @c: argument is the character to be checked
 * Return: 1 on succes
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

