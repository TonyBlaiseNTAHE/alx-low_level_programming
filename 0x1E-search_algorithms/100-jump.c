#include "search_algos.h"

/**
  * min - return the minimum value btn two number
  * @x: the first number
  * @y: the second number
  * Return: the minimum
*/
int min(int x, int y)
{
	if (x < y)
	{
		return (x);
	}
	else if (x == y)
	{
		return (x || y);
	}
	else
		return (y);
}
/**
  * jump_search -  a function that searches for a value in
  * a sorted array of integers using the Jump search algorithm
  * @array: the array
  * @size: the size of the array
  * @value: the value that we are looking for
  * Return: the index of the value or -1 if the number is not found
*/
int jump_search(int *array, size_t size, int value)
{
	int prev = 0;
	int step = sqrt(size);

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);
		if (prev >= (int)size)
			return (-1);
		/*if (step < value)*/
			printf("value found  between indexes [%d] and  [%d]\n", prev, step);
	}
	while (array[prev] < value)
	{
		prev++;
		if (prev >= (int)size)
			return (-1);
	}
	if (array[prev] == value)
	{
		return (prev);
	}
	else
		return (-1);
}
