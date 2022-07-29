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

	size = max - min + 1;

	range = malloc(sizeof(int) * size);

	if (range == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
	{
		range[index] = min++;
	}
	return (range);
}
