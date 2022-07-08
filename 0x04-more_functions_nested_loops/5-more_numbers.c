#include <stdio.h>
#include "main.h"

/**
 * more_numbers- 0-14 10x
 *
 * for loop
 *
 * if function
 *
 * putchar function
 *
 * Return: void
 */
void more_numbers(void)
{
	int a, t;

	for (t = '0'; t <= '9'; t++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
