#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - printx10 function
 *
 * for loop x2
 *
 * calling _putchar
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';
	int num = '0';

	for (num = '0'; num <= '9'; num++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
