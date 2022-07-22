#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: - integer for argument count
 *
 * @argv: - pointer to argument
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
