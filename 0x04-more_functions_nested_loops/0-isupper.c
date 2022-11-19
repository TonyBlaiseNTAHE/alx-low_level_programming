#include "main.h"

/**
 * _isupper - checks uppercase characters
 * @c: input to check
 *
 * Return: 1 if it is in uppercase, 0 if is not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
