#include <stdio.h>
#include "main.h"

/**
 * void print_rev - print sting
 *
 * @s: pointer
 *
 * Return(void)
 */
void print_rev(char *s)
{
	int len = 0;
	int count;

	while(s[count++])
	{
		len++;
	}

	for (count = len - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
