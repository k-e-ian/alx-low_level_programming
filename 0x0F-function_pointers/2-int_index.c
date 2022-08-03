#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function to be used to compare values
 *
 * Return: index of the first element for which the cmp(int) does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index1 = 0;
	int index;
	int element;

	if (size <= 0 || cmp == NULL)
		return (-1);

	for (index = 0; array[index] < size; index++)
	{
		element = array[index];
		if (cmp(element) != 0)
			return (index1);
		index1++;
	}
	return (index1);
}
