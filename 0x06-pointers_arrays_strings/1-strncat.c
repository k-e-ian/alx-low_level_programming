#include <stdio.h>

/**
 * _strncat - Strncat() function
 *
 * @dest: destination char pointer
 *
 * @src: source character pointer
 *
 * @n: integer limit of source character
 *
 * Return: concatted destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1;
	int len2;

	for (len1 = 0; dest[len1] != '\0'; ++len1)
	{
		;
	}
	for (len2 = 0; src[len2] != '\0' && len2 != n; ++len2, ++len1)
	{
		dest[len1] = src[len2];
	}
	return (dest);
}
