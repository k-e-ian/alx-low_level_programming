#include <stdio.h>
#include "main.h"

/**
 * _abs - absolute value of an integer
 *
 * integer
 *
 * Return: 0
 */
int _abs(int)
{
	int num;

	if (num > '0')
	{
		_putchar(num);
	}
	else if (num == 0)
	{
		_putchar(num);
	}
	else if (num < '0')
	{
		putchar(num);
	}
	return (0);
}
