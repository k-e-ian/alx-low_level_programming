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
	int count, index, size = ac, index2;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (count = 0; count < ac; count++)
	{
		for (index2 = 0; av[count][index2]; index2++)
			size++;
	}

	concat = malloc(sizeof(char) * size + 1);

	if (concat == NULL)
		return (NULL);

	index = 0;

	for (count = 0; count < ac; count++)
	{
		for (index2 = 0 ; av[count][index2]; index2++)
			concat[index++] = av[count][index2];
			
		concat[index++] = '\n';
	}
	concat[size] = '\0';
	return (concat);
}
