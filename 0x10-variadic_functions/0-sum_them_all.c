#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of parameters
 * Return: sum of all
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	unsigned int sum = 0;

	va_list args;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(args, const unsigned int);
	}
	va_end(args);
	return (sum);
}
