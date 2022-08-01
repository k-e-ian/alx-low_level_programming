#ifndef DOG_HEADER_GUARD_STRUCT
#define DOG_HEADER_GUARD_STRUCT

/**
 * struct dog - structure with dog elements
 * @name: pointer to char with dog name
 * @owner: pointer to char with name of dog owner
 * @age: float for dog age
 * Description: dog elements
 *
 */
typedef struct dog
{
	char *name, *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
