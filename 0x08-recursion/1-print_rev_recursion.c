#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints string recursively in a reverse order
 *
 * @s: pointer to string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
