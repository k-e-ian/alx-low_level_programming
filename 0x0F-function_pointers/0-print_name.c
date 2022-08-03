#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 *
 * @name: pointer to char with name
 *
 * @f: pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
