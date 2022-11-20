#include "main.h"

/**
 * print_line - function that print a line
 * @n:number of time the character should be printed
 *
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
