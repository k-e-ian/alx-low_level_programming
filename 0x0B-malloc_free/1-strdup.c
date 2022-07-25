#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string pointer to be copied
 *
 * Return: pointer to new space with the dup copy of str1
 */
char *_strdup(char *str)
{
	int index = 0;
	int size = 0;
	char *strdup;
	char *dup;

	for ( ; str[index] != '\0'; index++)
	{
		size++;
	}

	strdup = malloc((sizeof(char) * size) + 1);

	if (strdup == 0 || str == 0)
		return (NULL);

	dup = strdup;

	while (*str)
	{
		*dup = *str;
		dup++;
		str++;
	}

	*dup = '\0';

	return (strdup);
}
