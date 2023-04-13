#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of a number.
 *
 * Return: 0.
 */
int main(void)
{
	long int l = 612852475243;
	int i;

	for (i = 2; i <= l; i++)
	{
		if (l % i == 0)
		{
			l /= i;
			i--;
		}
	}
	printf("%ld", i);
	return (0);
}
