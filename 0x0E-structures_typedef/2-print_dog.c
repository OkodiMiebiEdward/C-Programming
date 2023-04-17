#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - outputs an instance of the struct with its specific members
 * @d: expecting argument to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
/*check if member is not provided*/
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

