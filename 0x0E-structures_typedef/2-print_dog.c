#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
  *print_dog - print struct dog
  *@d: pointer to print_dog
  *Return: void
  */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			d->owner = "(nil)";
		else
			printf("Owner: %s\n", d->owner);
	}
}


