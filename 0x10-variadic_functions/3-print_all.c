#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *
 *
 */
void print_all(const char * const format, ...)
{
	int index = 0;
	int len = 0;
	char *formated;

	va_list args;

	while (format[index] != '\0')
	{
		len++;
		index++;
	}
	
	va_start(args, format);
	
	index = 0;
	while (index < len)
	{
		if (format[index] == 'c')
			formated = va_arg(args, char);
		printf("%c", formated);
		if (format[index] == 'i')
			formatted = va_arg(args, int);
		printf("%d", formated);
		index++;
	}
}
