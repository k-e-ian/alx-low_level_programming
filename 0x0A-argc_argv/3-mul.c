#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
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
