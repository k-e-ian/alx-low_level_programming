#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialaize a variable of struct dog
 * @d: pointer to tructure with dog elements
 * @name: pointer to char with dog name
 * @owner: pointer to char with owner name
 * @age: floating for do age
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
