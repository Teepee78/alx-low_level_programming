#ifndef dog
#define dog

/**
 * typedef struct dog - structure dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 *void init_dog(struct dog *d, char *name, float age, char *owner);
 *void print_dog(struct dog *d);
 *dog_t *newdog(char *name, float age, char *owner);
 */

#endif /* dog */
