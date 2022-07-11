#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int count = 0, len = 0, n;

	while (str[count++])
	{
		len++;
	}
	if ((len % 2) == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}
	for (count = n; count < len; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
