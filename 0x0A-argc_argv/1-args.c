#include <stdio.h>

/**
 *
 *
 */
int main(int argc, char **argv)
{
	int index = 0;
	(void)argv;

	for ( ; index < argc; index++)
	{
		printf("%d\n", index);
	}
	return (0);
}
