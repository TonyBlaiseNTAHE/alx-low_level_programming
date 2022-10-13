#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function that prints my name
 * @name : name to be printed
 * @f: pointer to function
 * Return : nothing
 */
void print_name(char *name, void (*f)(char *))
{
	printf("My name is %s", name);
	(*f)(name);
}
