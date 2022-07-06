#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry mode
 *
 * srand, rand, RAN_MAX functions declations
 *
 * else if function
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	if ((i) == (0))
		printf("%d is zero\n", (i));
	else if ((i) > (0))
	{
		printf("%d is positive\n", (i));
	}
	else
	{
		printf("%d is negative\n", (i));
	}
	return;
}
