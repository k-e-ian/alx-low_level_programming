#include <stdio.h>
#include "main.h"

/**
 * times_table - function
 *
 * nested for loop
 *
 * if statement
 *
 * _putchar function
 *
 * Return: void
 */
void times_table(void)
{
	int n, m, times;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (m = 1; m <= 9; m++)
		{
			times = (m * n);
			if ((times / 10) > 0)
			{
				_putchar((times / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((times % 10) + '0');

			if (m < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
