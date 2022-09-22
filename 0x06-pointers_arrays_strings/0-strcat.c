#include "main.h"

/**
 * _strcat - concantenates two string pointe to by @src to
 * the end of the string pointed to by @dest
 * @dest: string that will be appended.
 * @src: string to be concatenated upon.
 *
 * Return :returns pointer to @dest.
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, count1 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count1 >= 0)
	{
		*(dest + count) = *(src + count1);
		if (*(src + count1) == '\0')
			break;
		count++;
		count1++;
	}
	return (dest);
}
