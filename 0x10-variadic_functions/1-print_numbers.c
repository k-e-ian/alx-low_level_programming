#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: pointer to string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsigned int index;

	va_list args;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (index < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
