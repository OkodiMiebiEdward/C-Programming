#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - variables initailization
 * @d: argument expected that points to the dog struct
 * @name: the variable name to be initialized
 * @age: argument of type float expected to be passed in this parameter
 * @owner: the variable owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	*d.name = name;
	*d.age = age;
	*d.owner = owner;
}

