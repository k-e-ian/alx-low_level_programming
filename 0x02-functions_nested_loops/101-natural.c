#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, n;

	x = 3;
	y = 5;
	n = 1024;

	int sum = 0;
	int sum2 = 0;
	int sum3 = (3 * 5 * (1024 / (3 * 5)) * ((1024 / (3 * 5)) + 1) / 2);

	sum = 3 * ((1024 / 3) * ((1024 / 3) + 1) / 2);
	sum2 = 5 * ((1024 / 5) * ((1024 / 5) + 1) / 2);

	printf("%d\n", (sum + sum2 - sum3));
	return (0);
}
