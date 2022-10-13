#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: input  array
 * @size: size of array
 * @action: pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i = -1;

	if (array && action)
	{
		while (++i < size)
			action(array[i]);
	}
}

