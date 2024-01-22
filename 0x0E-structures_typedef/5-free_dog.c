#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - this frees memory allocated for struct dog
 * @d: free struct dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
