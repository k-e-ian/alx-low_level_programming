#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - calloc function
 *
 * @nmemb: number of elements
 *
 * @size: byte size
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, nb;
	char *calloc, *call;

	nb = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	calloc = call = malloc(nb);
	if (call != NULL)
	{
	for (i = 0; i < nb; i++)
		*calloc++ = 0;
	}
	if (call == 0)
		return (NULL);
	return (call);
}
