#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of a number.
 *
 * Return: 0.
 */
int main(void)
{
	long long l = 612852475243;
	long long mx = 0;
	int i;

	for (i = 2; i <= sqrt(l); i++)
	{
		while (l % i == 0)
		{
			mx = i;
			l /= i;
		}
	}
	if (l > 1)
	{
		mx = l;
	}
	printf("%lld", mx);
	return (0);
}
