#include "main.h"

/**
 * set_string - set the value of a pointer to a char
 * @s: source address.
 * @to: target adress.
 * Return: no return.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
