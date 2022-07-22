#include <stdio.h>

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: integer of the nth byte to be copied
 *
 * Return: destination with the copied source file
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	*dest = *src;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
} 
