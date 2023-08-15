#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - that is going to free memory allocated for a struct dog
 * @i: the struct dog to freed
 */
void free_dog(dog_t *i)
{
	if (i)
	{
		free(i->name);
		free(i->owner);
		free(i);
	}
}
