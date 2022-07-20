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
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
	if (index == 0)
	{
		_puts_recursion(s);
	}
}
