#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog structure name
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: includes the dog details
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
  *dog_t - type definition for strucy dog
  */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
