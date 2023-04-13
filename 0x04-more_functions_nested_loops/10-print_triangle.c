#include "main.h"

/**
 * print_triangle - function that print triangle
 * @size: size of the triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (k = size; k >= (i + 1); k--)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
