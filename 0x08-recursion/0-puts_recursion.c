#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line with recursion
 *
 * @s: pointer to character string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s ++;
		_puts_recursion(s);
	}
	_putchar('\n');
}
