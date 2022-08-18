#include "main.h"

/**
 * binary_to_unit - function that converts binary to decimal
 * @b: pointer to string cointaining 1's and 0's
 * Return: decimal
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int dec = 0;
	int bin = 1;

	if (!b)
		return (0);

	index = 0;
	while (b[index])
	{
		index++;
	}

	index -= 1;
	while (index >= 0)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
			
		dec += (b[index] - '0') * bin;
		index--;
		bin *= 2;
	}

	return (dec);
}
