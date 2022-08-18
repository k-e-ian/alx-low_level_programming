#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num = 1;
	char *endian_checker;

	endian_checker = (char *)&num;

	if (*endian_checker == num)
		return (num);
	num -= num;

	return (num);
}
