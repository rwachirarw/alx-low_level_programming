#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * new_dog - creates a new dog
  * @name: name
  * @age: age
  * @owner: owner
  * Return: new dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	ptr_dog = malloc(sizeof(dog_t));

	if (ptr_dog == NULL)
		return (NULL);

	ptr_dog->name = name;
	ptr_dog->age = age;
	ptr_dog->owner = owner;

	return (ptr_dog);
}
