#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  creates an array of chars, and init with specific char
 *
 * @size: array size
 *
 * @c: char to fill the array
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int index = 0;
	char *array = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	while (index < size)
	{
		array[index] = c;
		index++;
	}
	return (array);
}
