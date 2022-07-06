#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function
 *
 * @n: integer
 *
 * if statement
 *
 * for loop
 *
 * putchar function
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	printf("98\n");
}
