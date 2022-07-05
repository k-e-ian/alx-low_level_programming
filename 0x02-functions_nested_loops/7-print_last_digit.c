#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print last digit function
 *
 * @n: integer
 *
 * if statement
 *
 * Return: integer
 */
int print_last_digit(int n)
{
	int printlastdigit = (n % 10);

	if (printlastdigit < 0)
	{
		printlastdigit = (-1 * printlastdigit);
	}
	_putchar(printlastdigit + '0');
	return (printlastdigit);
}
