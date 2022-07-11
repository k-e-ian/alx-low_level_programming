#include <stdio.h>

/**
 * _strlen - size of string dunction
 *
 * @s: pointer to integer s
 *
 * Return: value of size of string function
 */
int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; ++size)
	{
		;
	}

	return (size);
}
