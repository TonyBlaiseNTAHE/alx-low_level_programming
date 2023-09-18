#include <stdio.h>
/**
 * add - adds two number.
 * @a: first number.
 * @b: second number.
 * Return: the sum.
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - return the differnce between two number.
 * @a: first number.
 * @b: second number.
 * Return: the difference.
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiplies two numbers.
 * @a: first number.
 * @b: second number.
 * Return: the multiplication of two number.
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * mod - returns the modular between two number.
 * @a: first number.
 * @b: second number.
 * Return: the modular.
 */
int mod(int a, int b)
{
	if (b == 0)
		return (-1);
	else
		return (a % b);
}
/**
 * div - divides two number.
 * @a: the first number.
 * @b: the second number.
 * Return: the division.
 */
int div(int a, int b)
{
	return (a % b);
}
