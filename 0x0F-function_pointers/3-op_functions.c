#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Add two numbers.
 * @a: Takes the first number.
 * @b: Takes the second number.
 * Return: outputs the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtract two numbers.
 * @a: The first number argument
 * @b: Takes the second number
 * Return: outputs the difference between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiply two numbers
 * @a: Takes the first number
 * @b: Takes the second number
 * Return: outputs the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divide two numbers.
 * @a: Takes the first number.
 * @b: Takes the second number.
 * Return: outputs the answer when a is divided by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - The Modulus of a number.
 * @a: Takes the first number
 * @b: Takes the second number
 * Return: outputs thye modulus of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

