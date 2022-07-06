#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long count, a, b, c, sums;

	a = sums = 0;
	b = 1;

	for (count = 0; count < 50; count++)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0 && c < 4000000)
		{
			sums += c;
		}
	}
	printf("%lu\n", sums);
	return (0);
}
