#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creat an array of integers
 *
 * @min: lower limit integer to be included
 *
 * @max: upper limit int to be included
 *
 * Return: pointer to integer array
 *
 */
int *array_range(int min, int max)
{
	int *range;
	int index, size;

	if (min > max)
		return (NULL);

	for (index = min; index <= max; index++)
	{
		size++;
	}
	range = malloc(sizeof(int) * size);

	for (index = min; index <= max; index++)
	{
		range[index] = index;
	}

	if (range == NULL)
		return (NULL);
	return (range);
}
