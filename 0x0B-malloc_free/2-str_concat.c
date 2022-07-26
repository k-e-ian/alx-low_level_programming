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
	int size1 = 0, size2 = 0, index1 = 0, index2 = 0, index3 = 0, sizesum;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

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
