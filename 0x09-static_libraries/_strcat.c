#include <stdio.h>

/**
 * _strcat - concat two strings
 *
 * @dest: pointer to string1
 *
 * @src: pointer to string2 to be appended to string1
 *
 * Return: concated string
 */
char *_strcat(char *dest, char *src)
{
	int len1;
	int len2;

	for (len1 = 0; dest[len1] != '\0'; ++len1)
	{
		;
	}
	for (len2 = 0; src[len2] != '\0'; ++len2, ++len1)
	{
		dest[len1] = src[len2];
	}
	dest[len1] = '\0';
	return (dest);
}
