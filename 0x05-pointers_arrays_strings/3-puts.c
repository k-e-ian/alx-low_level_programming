#include <stdio.h>
#include "main.h"

/**
 * _puts - print sting
 *
 * @str: pointer
 *
 * Return(void)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
