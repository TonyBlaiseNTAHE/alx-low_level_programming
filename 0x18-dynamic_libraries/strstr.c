#include "main.h"

/**
 * _strstr - find the first occurence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: string.
 * Return: pointer to the beginning of the located substring or
 *         NUll if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (j = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (!needle[j])
			return (haystack + i);
	}
	return (NULL);
}
