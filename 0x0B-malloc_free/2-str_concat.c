#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: pointer to string1
 *
 * @s2: pointer to string2
 *
 * Return: concated string
 */
char *str_concat(char *s1, char *s2)
{
	int sizesum;
	int size1;
	int size2;
	int index1 = 0;
	int index2 = 0;
	int index3 = 0;
	char *concat;
	char *empty = "";
	
	if (s1 == 0)
		return (NULL);
	if (s2 == 0)
	{
		*s2 = *empty;
		size2 = 0;
	}

	for ( ; s1[index1] != '\0'; index1++)
	{
		size1++;
	}
	for ( ; s2[index2] != '\0'; index2++)
	{
		size2++;
	}
	sizesum = size1 + size2;
	concat = malloc((sizeof(char) * sizesum) + 1);

	if (concat == 0)
		return (NULL);

	while (*s1 != '\0')
	{
		concat[index3] = *s1;
		s1++;
		index3++;
	}
	while (*s2 != '\0')
	{
		concat[index3] = *s2;
		s2++;
		index3++;
	}

	concat[index3] = '\0';
	return (concat);
}
