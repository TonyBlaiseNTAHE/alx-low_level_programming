#include "main.h"
/**
 * _memset - fills a memory block with a constant byte
 * @s:pointer to memory area to fill
 * @b: constant byte
 * @n: number of bytes to fill
 *
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *start = s;

	while (i < n)
	{
		**s++ = b;
		i++;
	}
	return (start);
}
