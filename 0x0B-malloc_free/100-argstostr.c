#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 *
 * @ac: argument count
 *
 * @av: argument vector
 *
 * Return: concated string of arguments
 */
char *argstostr(int ac, char **av)
{
	int count = 0, index = 0, size = 0, index1 = 0, index2 = 0;
	char *concat, *word;

	if (ac == 0 || av == NULL)
		return (NULL);

	for ( ; index1 < ac; index1++)
	{
		for ( ; av[index1][index2]; index2++)
			size++;
	}

	concat = malloc(sizeof(char) * size + 1);

	if (concat == NULL)
		return (NULL);

	for ( ; count < ac; count++)
	{
		word = av[count];
		while (*word)
		{
			concat[index] = *word;
			word++;
			index++;
		}
		concat[index++] = '\n';
	}
	concat[index] = '\0';
	return (concat);
}
