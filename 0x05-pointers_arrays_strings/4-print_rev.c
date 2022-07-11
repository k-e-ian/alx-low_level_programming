#include "main.h"

/**
 * print_rev - Reverses a string.
 * @s: The string to be reversed.
 */
void print_rev(char *s)
{
	int len = 0, count;

	while (s[count++])
		len++;

	for (count = len - 1; count >= 0; count--)
		_putchar(s[count--]);

	_putchar('\n');
}
