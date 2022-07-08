#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	long prime = 612852475143, pridiv;

	while (pridiv < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
		}
		for (pridiv = 3; pridiv < (prime / 2); pridiv += 2)
		{
			if (prime % pridiv == 0)
				prime /= pridiv;
		}
	}
	printf("%ld", prime);
	printf("\n");
	return (0);
}
