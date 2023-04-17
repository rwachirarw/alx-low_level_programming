#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
  * new_dog - creates a new dog
  * @name: name
  * @age: age
  * @owner: owner
  * Return: new dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;
	char *copy_owner;
	char *copy_name;

	copy_name = malloc(strlen(name) + 1);
	if (copy_name == NULL)
		return (NULL);

	copy_owner = malloc(strlen(owner) + 1);
	if (copy_owner == NULL)
		return (NULL);

	ptr_dog = malloc(sizeof(dog_t));
	if (ptr_dog == NULL)
		return (NULL);

	strcpy(copy_name, name);
	strcpy(copy_owner, owner);

	ptr_dog->name = copy_name;
	ptr_dog->age = age;
	ptr_dog->owner = copy_owner;


	return (ptr_dog);
}
