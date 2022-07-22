#include <stdlib.h>
#include <stdio.h>

/**
 *
 *
 *
 *
 *
 */
int main(int argc, char **argv)
{
	int index = 1;
	int sum = 0;
	
	if (argc > 1)
	{
		for ( ; index < argc; index++)
		{
			if (argc > '9' || argc < '0')
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[index]);
		}
		printf("%d\n", sum);
	}
	else 
	{
		printf("%d\n", sum);
	}
	return (0);
}
