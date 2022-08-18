#include "main.h"

/**
 * _putchar - function that prints characters
 *
 * @c: character to be printed
 *
 * Return: number of characters printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
