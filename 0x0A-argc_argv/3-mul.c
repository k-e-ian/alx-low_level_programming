#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry mode
 *
 * @argc: argument count
 *
 * @argv: argument pointer
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int mul = 1;
	int index = 1;

	if (argc > 1)
	{
		for ( ; index < argc; index++)
		{
			mul *= atoi(argv[index]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
