#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - releases memory
 * @d: the struct dog to be set free
 */
void free_dog(dog_t *d)
{
	/*check if d is not null*/
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

