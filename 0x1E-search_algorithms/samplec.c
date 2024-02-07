#include <stdio.h>

/**
  * interpolation_search - searches for a value in a sorted array
  * using the interpolation search algorithm
  * @array: the array
  * @size: the size of the array
  * @value: the value to find
  * Return: -1 if the number is not found or the index where the number is found.
*/
int interpolation_search(int *array, size_t size, int value)
{
    int low, high, pos;

    low = 0;
    high = size - 1;

    while (low <= high && value >= array[low] && value <= array[high]) {
        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
        printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
        if (array[pos] == value)
            return pos;
        else if (array[pos] < value)
            low = pos + 1;
        else
            high = pos - 1;
    }

    return -1; // Value not found
}
int main(void)
{
    int array[] = {
        0, 0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 1, interpolation_search(array, size, 1));
    printf("Found %d at index: %d\n\n", 1, interpolation_search(array, size, 7));
    printf("Found %d at index: %d\n", 999, interpolation_search(array, size, 999));
    return (0);
}
