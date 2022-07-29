#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 *
 * @ptr: void pointer
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: conditional(ptr || NULL || a pointer to the reallocated mem block
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int index;
	char *ptr2, *copier;
	void *data;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		data = malloc(new_size);
		if (data == NULL)
			return (NULL);
		return (data);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr2 = ptr;
	data = malloc(sizeof(*copier) * new_size);

	if (data == NULL)
	{
		free(ptr);
		return (NULL);
	}

	copier = data;

	for (index = 0; index < old_size && index < new_size; index++)
	{
		copier[index] = *ptr2++;
	}
	free(ptr);
	return (data);
}
