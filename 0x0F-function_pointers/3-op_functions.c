#include  "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of a and b
 * @a: the first number
 * @b: the second  number
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the multiplication of two numbers.
 * @a: the first number
 * @b: the second number
 *
 * Return: the multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/** 
 * op_div - Returns the division of two numbers
 * @a: the first number
 * @b:the second number
 *
 * Return: the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Return the modula of two numberss.
 * @a: the first number
 * @b: the second number
 *
 * Return: the modula of two numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
