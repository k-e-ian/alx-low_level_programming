#include <stdio.h>
#include "main.h"

/**
 * print_square - function for printing square with #
 *
 * @size: integer
 *
 * if statement
 *
 * for loop
 *
 * Return: void
 */
void print_square(int size)
{
	int h, w;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (w = 0; w < size; w++)
				_putchar('#');

			if (h == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
