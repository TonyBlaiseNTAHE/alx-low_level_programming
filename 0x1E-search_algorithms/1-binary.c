#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: the array
 * @size: the size of the array
 * @value: the value to be found
 * Return: -1 if the value is not found
 *         the index of the value found
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1;
	size_t i;
	float m;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		m = (float)(l + r) / 2;
		printf("Searching in array: ");
		for (i = l; i <= (size_t)r; i++)
		{
			printf("%d", array[i]);
			if (i < (size_t)r)
				printf(", ");
		}
		printf("\n");

		if (array[(int)m] == value)
			return ((int)m);
		else if (array[(int)m] < value)
			l = (int)m + 1;
		else
			r = (int)m - 1;
	}

	return (-1);
}

