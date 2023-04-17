#include "dog.h"
/**
  * init_dog - Initializes a variable of type struct dog
  * @d: pointer to the struct dog data type
  * @name: member 1
  * @age: member 2
  * @owner: member 3
  * Return: voide
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
