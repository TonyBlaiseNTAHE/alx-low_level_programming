#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer.
 * @accept: pointer.
 * Return: a pointer to the byte in s that matches one
 *         of the bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
