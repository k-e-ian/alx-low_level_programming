#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 */
void print_to_98(int n)
{
	n = 0;

	if (n == 0)
	{
		for (n = '0'; n <= 98; n++)
		{
			_putchar(n);
		}
		for  (n = 98; n <= 98; n++)
		{
			_putchar(n);
		}
		for (n = 111; n >= 98; n--)
		{
			_putchar(n);
		}
		for (n = 81; n <= 98; n++)
		{
			_putchar(n);
		}
		for (n = -10; n <= 98; n++)
		{
			_putchar(n);
		}
	}
	_putchar(',');
	_putchar(' ');
}
