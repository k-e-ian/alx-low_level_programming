#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function that concatenates two strings to the n'th byte
 *
 * @s1: string 1 pointer
 *
 * @s2: string 2 pointer
 *
 * @n: n'th byte to be concated
 *
 * Return: concated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0, size2 = 0, sumsize;
	char *concated;
	unsigned int index, index1, index2, index3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] != '\0'; index++)
	{
		size1++;
	}
	for (index1 = 0; s2[index1] != '\0'; index1++)
	{
		size2++;
	}
	sumsize = size1 + size2;

	concated = malloc(sizeof(char) * (sumsize + 1));

	if (concated == NULL)
		return (NULL);

	index2 = 0;
	index3 = 0;

	while (*s1 != '\0')
	{
		concated[index2] = *s1;
		s1++;
		index2++;
	}
	for ( ; s2[index3] != '\0' && index3 < n; index2++, index3++)
	{
		if (n >= index3)
			concated[index2] = *s2;
		concated[index2] = s2[index3];
	}
	concated[index2] = '\0';
	return (concated);
}
