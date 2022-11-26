#include "main.h"

/**
 * print_triangle - function that print triangle
 * @size: size of the triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int row, column, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = size - row; space >= 1; space--)
			{

			}
			for (column = 1; column <= row; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
