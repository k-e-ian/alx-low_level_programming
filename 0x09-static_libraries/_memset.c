#include <stdio.h>

/**
 * _memset - function that fills n bytes of b in array
 *
 * @s: pointer s to character
 * @b: character to fill 2D array
 * @n: number of bytes to be filled by b
 *
 * Return: pointer s to character
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	for ( ; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
} 
