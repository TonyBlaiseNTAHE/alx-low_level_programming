#include "main.h"

/**
 * _strncat - concatenates two strings but  add inputed numberof bytes,
 * @dest: string to be appended.
 * @src: string to be completed at end of dest.
 * @n: integer parameter to compare index to
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
