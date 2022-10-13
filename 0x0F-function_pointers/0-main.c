#include "main.h"

/**
 * main - calls function to pointer
 *
 * Return: Always 0
 */
int main(void)
{
	void (*f)(char *);
	f = print_name;
	(*f)("Tony");
}
