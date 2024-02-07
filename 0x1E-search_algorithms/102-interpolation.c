#include "search_algos.h"
/**
 * interpolation_search - function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm.
 * @array : is a pointer to the first element of the array to search in.
 * @size : the number of elements in array.
 * @value : the value to search for.
 * Return: index of value or -1 if not found.
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array)
	{
		while (low <= high)
		{
			pos = low + (((double)(high - low) / (array[high] - array[low])) *
					(value - array[low]));
			if (pos < size)
				printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			else
			{
				printf("Value checked array[%lu] is out of range\n", pos);
				break;
			}
			if (array[pos] == value)
				return (pos);
			if (array[pos] < value)
				low = pos + 1;
			else
				high = pos - 1;
		}
	}
	return (-1);
}
