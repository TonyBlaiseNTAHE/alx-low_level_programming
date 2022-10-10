#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print a struct dog
 * @d: struct dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name:(nil)\n");
		else
			printf("Name: %s", d->name);
		printf("Age: %f", d->age);

		if (!(d->owner))
			printf("Owner:(nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
