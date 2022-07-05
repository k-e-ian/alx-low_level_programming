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
	if (n == '0')
	{
		for (n = 98; n <= 98; n++)
		{
			_putchar(n);
			if (n <= 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	else
	{
		putchar('n');
	}
	putchar('\n');
}
