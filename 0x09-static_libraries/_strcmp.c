#include <stdio.h>

/**
 * _strcmp - compare two strings
 *
 * @s1: string1 to be compared with
 *
 * @s2: string to compare with
 *
 * Return: positive integer if s1>s2, negative integer if s1<s2, else zero
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		result = 0;
	}
	else
	{
		result = (*s1 - *s2);
	}
	return (result);
} 
