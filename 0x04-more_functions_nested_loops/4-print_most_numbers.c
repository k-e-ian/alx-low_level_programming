#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - function
 *
 * for loop
 *
 * if statement
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
		_putchar(a);
	}
	_putchar('\n');
}
