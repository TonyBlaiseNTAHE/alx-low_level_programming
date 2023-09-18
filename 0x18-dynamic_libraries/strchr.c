#include "main.h"

/**
 * _strchr - locates a character in astring.
 * @s: pointer.
 * @c: character in the string.
 * Return: a pointer to the first occurences of the character
 *         c in the string s, or NULL if the character is not found.
 *         NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
		return (s);
	return ('\0');
}
