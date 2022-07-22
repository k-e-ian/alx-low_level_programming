#include <stdlib.h>
#include <stdio.h>

/**
 * main -Entry mode
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int index = 1;
	int sum = 0;
	int count = 0;

	for ( ; index < argc; index++)
	{
		for ( ; argv[index][count]; count++)
		{
			if (argv[index][count] < '0' || argv[index][count] > '9')
			{
				printf("Error\n");
				return (1);
			}

		}
		sum += atoi(argv[index]);
	}
	printf("%d\n", sum);
	return (0);
}
