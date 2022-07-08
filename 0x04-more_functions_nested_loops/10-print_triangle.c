#include <stdio.h>
#include "main.h"

/**
 * print_triangle - triangle printer
 *
 * @size: integer
 *
 * Return: void
 */
void print_triangle(int size)
{
	int sh, ind;

	if (size > 0)
	{
		for (sh = 1; sh <= size; sh++)
		{
			for (ind = size - sh; ind > 0; ind--)
				_putchar(' ');

			for (ind = 0; ind < sh; ind++)
				_putchar('#');

			if (sh == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
