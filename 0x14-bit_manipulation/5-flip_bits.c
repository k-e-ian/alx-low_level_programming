#include "main.h"

/**
 * flip_bits - function that checks howm many bits to flip
 *		to allow n to become m
 * @n: first number
 * @m: second number
 * Return: number of bits you would need to flip
 *		to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0, xor = n ^ m;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
