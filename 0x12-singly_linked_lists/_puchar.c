#include "unistd.h"

/**
 * _purtchar - writes character c to stdout
 * @c: charater to print
 *
 * Return: on success 1
 * on error, -1 is return, and errno is set unappropriate
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
