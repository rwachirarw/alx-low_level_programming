#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - frees dogs
  * @d: dogs
  * Return: void
  */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(name);
		free(owner);
		free(d);
	}

}
