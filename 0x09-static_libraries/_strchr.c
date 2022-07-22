#include <stdio.h>

/**
 * _strchr - returns a pointer to the first occurence of c
 *
 * @s: pointer to initial string
 * @c: character to be checked for
 *
 * Return: pointer to string of first c or NULL if c is not in string
 *
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (NULL);
} 
