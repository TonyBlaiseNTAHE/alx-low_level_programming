#include "search_algos.h"

/**
 * min - return the smallest number btn two number
 * @x: the first number 
 * @y: the second number
 * Return: nothing
*/
int min(int x, int y)
{
    if (x < y)
    {
        return (x);
    }
    else
    {
        return (y);
    }
}
/**
 * jump_search - searches for a value in a sorted array of integers
 * using the jump search algorithm
 * @array: the array
 * @size: the size
 * @value: the value to search for
 * Return: -1 if the number if not found or the index of the number found
*/
int jump_search(int *array, size_t size, int value)
{
    int a, b, m;

    if (array == NULL || size == 0)
        return -1;

    b = sqrt(size);
    a = 0;

    while (array[min(b, size) - 1] < value)
    {
        a = b;
        b += sqrt(size);
        if (a >= (int)size)
            return -1;
    }

    while (array[a] < value)
    {
        a++;
        if (a == min(b, size))
            return -1;
    }

    if (array[a] == value)
        return a;
    else
        return -1;
}
