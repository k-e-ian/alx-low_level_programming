#include <stdio.h>

/**
 * main -Entry point
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: Always 0
 *
 */
int main(int argc, char **argv)
{
	int index = 0;

	for ( ; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
