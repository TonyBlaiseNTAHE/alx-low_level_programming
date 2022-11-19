#include "main.h"

/**
 * _isdigit - checks if it is digit
 * @c : input to check
 *
 * Return: 1 if it is a digit , 0 if it is not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
