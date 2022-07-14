#include <stdio.h>

/**
 * _strncpy - copies a string to the nth value
 *
 * @dest: destination variable
 *
 * @src: source variable
 *
 * @n: integer to carry nth value
 *
 * Return: copied destination file
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len2;

	for (len2 = 0; src[len2] != '\0' && len2 < n ; len2++)
	{
		dest[len2] = src[len2];
	}
	for ( ; len2 < n; ++len2)

	dest[len2] = '\0';
	return (dest);
}
