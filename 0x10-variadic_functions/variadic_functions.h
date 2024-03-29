#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdarg.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

void print_char(va_list arg);

void print_int(va_list arg);

void print_float(va_list arg);

void print_string(va_list arg);

/**
 * struct printer - defines a printer
 * @symbol: symbol rep dat type
 * @print: function pointer to a function that prints a data type like symbol
 *
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

#endif
