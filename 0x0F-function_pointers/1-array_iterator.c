#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -executes function given as a parameter on each array element
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;
	int element;

	for (index = 0; index < size; index++)
	{
		element = array[index];
		action(element);
	}
	if (action == NULL || !element)
		return;
}
