#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function to get string length
 * @str: pointer to string to check length
 * Return: length
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src with '\0'
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newd;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newd = malloc(sizeof(dog_t));
	if (newd == NULL)
		return (NULL);

	newd->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newd->name == NULL)
	{
		free(newd);
		return (NULL);
	}

	newd->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newd->owner == NULL)
	{
		free(newd -> name);
		free(newd);
		return (NULL);
	}

	newd->name = _strcopy(newd->name, name);
	newd->age = age;
	newd->owner = _strcopy(newd->owner, owner);

	return (newd);
}
