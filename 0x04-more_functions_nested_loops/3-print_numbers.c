#include <stdio.h>
#include "main.h"
/**
 * print_numbers - printer
 *
 * variable
 *
 * for loop
 * putchar
 *
 * Return: void
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
