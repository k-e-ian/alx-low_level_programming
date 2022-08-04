#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: pointer to the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *strings;

	va_list args;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		strings = va_arg(args, char *);
		if (strings == NULL)
			printf("(nil)");
		printf("%s", strings);
		if (index < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
