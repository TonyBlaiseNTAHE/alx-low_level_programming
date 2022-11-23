#include "main.h"
#include <stdio.h>

/**
 * main - checks codes
 *
 * Return: 0
 */

int main(void)
{
	int a, b, c;
	int largest;

	a = 120;
	b = 60;
	c = -34;

	largest = largest_number(a, b, c);
	printf("%d", largest);
	return (0);
}
