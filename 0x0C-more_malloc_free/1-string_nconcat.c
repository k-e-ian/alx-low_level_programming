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
	unsigned int size1 = n;
	char *concated;
	unsigned int index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] != '\0'; index++)
	{
		size1++;
	}

	concated = malloc(sizeof(char) * (size1 + 1));

	if (concated == NULL)
		return (NULL);
	size1 = 0;

	for (index = 0; s1[index] != '\0'; index++)
	{
		concated[size1++] = s1[index];
	}
	for (index = 0; s2[index] != '\0' && index < n; index++)
	{
		concated[size1++] = s2[index];
	}
	concated[size1] = '\0';
	return (concated);
}
